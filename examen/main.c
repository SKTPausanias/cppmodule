#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *str)
{
    char *s1 = malloc(sizeof(char) * (ft_strlen(str) + 1));
    int i = 0;
    while (str[i])
    {
        s1[i] = str[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
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

int exec_cmd(int i, int end, char **av, char **env)
{
    char **args = malloc(sizeof(char*) * ((end - i) + 1));
    int j = i;
    int h = 0;
    while (j < end)
    {
        args[h] = ft_strdup(av[j]);
        j++;
        h++;
    }
    args[h] = 0;
    if (strcmp(av[i], "cd") == 0)
    {
        if ((end - i) != 2)
        {
            write(2, "error: cd: bad arguments\n", ft_strlen("error: cd: bad arguments\n"));
            return 0;
        }
        else if (chdir(av[i + 1]) < 0)
        {
            write(2, "error: cd: cannot change directory to path_to_change\n", ft_strlen("error: cd: cannot change directory to "));
            write(2, av[i + 1], ft_strlen(av[i + 1]));
            write(2, "\n", 1);
            return 0;
        }
    }
    else
    {
        pid_t pid2;
        int status;
        pid2 = fork();
        if (pid2 == 0)
        {
            if (execve(av[i], args, env) < 0)
            {
                write(2, "error: cannot execute executable_that_failed\n", ft_strlen("error: cannot execute "));
                write(2, av[i], ft_strlen(av[i]));
                write(2, "\n", 1);
            }
            exit(0);
        }
        else
            waitpid(pid2, &status, 0);
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
    /*if (pid < 0)
    {

    }*/
    if (pid == 0)
    {
        dup2(fd[1], 1);
        exec_cmd(i, end, av, env);
        exit(0);
    }
    else
    {
        waitpid(pid, &status, 0);
        dup2(fd[0], 0);
        close(fd[1]);
        close(fd[0]);
    }
    return 0;
}

int check_pipe(int i, int end, char **av, char **env)
{
    int start = i;
    if (strcmp(av[i], ";") == 0)
        return 0;
    
    while (i < end)
    {
        if (strchr2(i, end, av, "|") == 1)
        {
            while (strcmp(av[i], "|") != 0)
                i++;
            ft_pipe(start, i, av, env);
            start = i + 1;
        }
        else
        {
            exec_cmd(i, end, av, env);
            break ;
        }
        i++;        
    }
    return 0;
}

int main(int argc, char **av, char **env)
{
    int i = 1;
    int start = i;

    while (i < argc)
    {
        if (strchr2(i, argc, av, ";") == 1)
        {
            while (strcmp(av[i], ";") != 0)
                i++;
            check_pipe(start, i, av, env);
            start = i + 1;
        }
        else
        {
            check_pipe(i, argc, av, env);
            break ;
        }
        i++;
    }
    return 0;
}