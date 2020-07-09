#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strdup(char *str)
{
	char *new = malloc(sizeof(char) * (ft_strlen(str) + 1));
	int i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return new;
}

int strchr2(int start, int end, char **av, char *str)
{
	while (start < end)
	{
		if (strcmp(av[start], str) == 0)
			return 1;
		start++;
	}
	return 0;
}

int do_cmd(int i, int end, char **av, char **env)
{
	char **args = malloc(sizeof(char*) * ((end - i) + 1));
	int j = i;
	while (j < end)
	{
		args[j] = ft_strdup(av[j]);
		j++;
	}
	args[j] = "NULL";
	if (strcmp(av[i], "cd") == 0)
	{
		if ((end - i) != 1)
			printf("bad arguments\n");
		else if (chdir(av[i + 1]))
			printf("error: cd: cannot change directory to \n");
	}
	else
		execve(av[i], args, env);
}

int ft_pipe(int i, int end, char **av, char **env)
{
	int fd[2];
	pipe(fd);
	pid_t pid;

	if (!fork())
	{
		dup2(fd[1], 1);
		do_cmd(i, end, av, env);
		exit(0);
	}
	else
	{
		wait(NULL);
		dup2(fd[0], 0);
        close(fd[1]);
	}
}

int exec_cmd(int i, int end, char **av, char **env)
{
	int start = i;
	if (strcmp(av[i], ";") == 0)
		return 0;
	while (i < end)
	{
		if (strchr2(i, end, av, "|") == 1)
		{
			start = i;
			while (strcmp(av[i], "|") != 0)
				i++;
			ft_pipe(start, i, av, env);
			start = i + 1;
		}
		else
			do_cmd(i, end, av, env);
		i++;
	}
	return 1;
}

int main(int argc, char **av, char **env)
{
	int	i = 1;
	int start = i;

	while (i < argc)
	{
		if (strchr2(i, argc, av, ";") == 1)
		{
			if (strcmp(av[i], ";") == 0)
			{
				exec_cmd(start, i, av, env);
				start = i + 1;
			}
		}
		else
			exec_cmd(i, argc, av, env);
		i++;
	}
	return (0);	
}