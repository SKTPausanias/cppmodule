#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

int exec_cmd(int start, int end, char **av, char **env)
{
	if (strcmp(av[start], ";") == 0)
		return 0;
	/*if (strchr2(start, end, av, "|") == 1)
	{

	}*/
	while (start < end)
	{
		if (strchr2(start, end, av, "|") == 1)
		{

		}
		else
		{
			
		}
		/*printf("%s ", av[start]);
		start++;*/
	}
	printf("\n");
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