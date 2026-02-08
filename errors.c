#include "pipex.h"

// function to check if i have exactly 5 argc. (1:program, 2:infile, 3:cmd1, 4:cmd2, 5:outfile
void	check_argc(int ac)
{
	if (ac != 5)
	{
		ft_putstr_fd("Error: Wrong number of arguments\n", STDERR_FILENO);
		exit(1);
	}
}

void	free_arg(char **args)
{
	int	i;

	i = 0;
	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	error_msg(char *msg)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	exit(1);
}