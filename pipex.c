#include "pipex.h"

int main(int argc, char *argv[], char **env)
{
	int	pipe_fd[2]; //the infile and outfile    pipe_fd[0] == read end  pipe_fd[1] == write end  
	pid_t pid;

	check_argc(argc);
	if (pipe(pipe_fd) == -1)
		error_msg("Error: pipefd[2]\n");
	pid = fork();
	if (pid == -1)
		error_msg("Error: Fork operation failed\n");
	if (pid == 0)
		child(pipe_fd, argv, env);
	waitpid(pid, NULL, 0);
	parent(pipe_fd, argv, env);
	return (0);
}


//function that executes a program specified by the file path. 
//it will replace the current process with the new program 
void	exec(char *cmd, char **env)
{
	
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	path = get_path(s_cmd[0], env);
	if (execve(path, s_cmd, env) == -1)
	{
		error_msg("execve failed");
		free_arg(s_cmd);
		exit(EXIT_FAILURE);
	}
}



//opens a file for reading and duplicates the fd to the standard output 
//call the exec to execute the command specified by av[2]
void	child(int *fd, char **argv, char **env)
{
	int	fd_in;
	
	fd_in = open_file(argv[1], 0);   // 0 == O_RDONLY
	dup2(fd_in, 0);    // redirects standard input(fd 0) to point to fd_in so if we read from the standard input it will read from the file argv[1]
	dup2(fd[1], 1);   //  redirects the standard output (fd 1)  to the pipe write end fd[1]     after anything written to the stand output goes into the pipe instead of the terminal   the purpose is that the redirection allows the output of the process to be sent directly into another process through the pipe
	close(fd[0]);
	exec(argv[2], env); // runs the command specified on argv[2]
}


//opens a file for writting and duplicates the fd to standard output
//duplicates the read end of pipe to standard output
//call exec to execute the command given by av[3]
void	parent(int *fd, char **argv, char **env)
{
	int	fd_out;


	fd_out = open_file(argv[4], 1);
	dup2(fd_out, 1);   // redirect st output (fd1) to the file fd_out    instead of writing output to the shell it will write to the output file
	dup2(fd[0], 0); // instead of reading from the standard input it reads the data sent by the child through the pipe
	close(fd[1]);
	exec(argv[3], env);
}


int	open_file(char *filename, int read_write)
{
	int	file_fd;

	if (read_write == 0)
		file_fd = open(filename, O_RDONLY, 0777);
	if (read_write == 1)
		file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (file_fd == -1)
		error_msg("Error: File discriptor\n");
	return (file_fd);
}





