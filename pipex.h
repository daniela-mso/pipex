#ifndef PIPEX_H
# define PIPEX_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stdio.h>
#include "libft/libft.h"



// main process
int     main(int argc, char *argv[], char **env);
int     open_file(char *filename, int read_write);
void	exec(char *cmd, char **env);
void	child(int *fd, char **argv, char **env);
void	parent(int *fd, char **argv, char **env);

// find path to exec
char	**get_env_paths(char **env);
char	*get_path(char *cmd, char **paths);

//errors & checks & free
void	check_argc(int ac);
void	error_msg(char *msg);
void	free_arg(char **args);


#endif
