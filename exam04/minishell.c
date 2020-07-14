#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

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
	int h = 0;
	while (j < end)
	{
		args[h] = ft_strdup(av[j]);
		h++;
		j++;
	}
	args[h] = '\0';
	if (strcmp(av[i], "cd") == 0)
	{
		if ((end - i) != 1)
			printf("bad arguments\n");
		else if (chdir(av[i + 1]))
			printf("error: cd: cannot change directory to \n");
	}
	else
	{
		int status;
		pid_t pid;
		pid = fork();
		if (pid == 0)
			execve(av[i], args, env);
		else
			waitpid(pid, &status, 0);
	}
	return 0;
}

int ft_pipe(int i, int end, char **av, char **env)
{
	int fd[2];
	pipe(fd);
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		dup2(fd[1], 1);
		do_cmd(i, end, av, env);
		exit(0);
	}
	else
	{
		waitpid(pid, &status, 0);
		dup2(fd[0], 0);
        close(fd[1]);
		printf("lol\n");
	}
	return 0;
}

void exec_cmd(int i, int end, char **av, char **env)
{
	int start = i;
	if (strcmp(av[i], ";") == 0)
		return ;
	while (i < end)
	{
		if (strchr2(i, end, av, "|") == 1)
		{
			while (strcmp(av[i], "|") != 0)
				i++;
			printf("%s\n", av[start]);
			printf("%s\n", av[i]);
			ft_pipe(start, i, av, env);
			i++;
			start = i;
		}
		else
			do_cmd(i, end, av, env);
		i++;
	}
}

int main(int argc, char **av, char **env)
{
	int	i = 1;
	int start = i;

	while (i < argc)
	{
		if (strchr2(i, argc, av, ";") == 1)
		{
			while (strcmp(av[i], ";") != 0)
				i++;
			exec_cmd(start, i, av, env);
			i++;
			start = i;
		}
		else
		{
			printf("What\n");
			exec_cmd(i, argc, av, env);
		}
		i++;
	}
	return (0);	
}