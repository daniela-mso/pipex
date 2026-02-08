#include "pipex.h"

//function that searches for the string of the PATH environment variable, this string contains all the directories listed in path separated by ":", in thoes dir the cmd may be found
//then split the string by ":" to get each individual dir 

char	**get_env_paths(char **env)
{
	int	i;
	
	i = 0;
	if (env == NULL)
		return (NULL);
	while (env[i] != NULL && (ft_strncmp(env[i], "PATH=", 5) != 0))
		i++;
	return (ft_split(env[i] + 5, ':'));
}


//retrieves the commands executable
//function that takes command string and the paths as argument
//to get the command im looking for in the paths i use split (ex:. cmd == "ls -l", then i only want "ls"
//after use get_env_paths to get individual dir and to the end of the dir add '/' and then the command i found (ex:. dir == /bin ---> /bin/ls) in order to create the executable path
//a

char	*get_path(char *cmd, char **paths)
{
	char	**cmd_args;
	char	**all_paths;
	char	*temp_path;
	char	*final_path;
	int		i;

	i = -1;
	if (cmd == NULL || paths == NULL)
		return (NULL);
	cmd_args = ft_split(cmd, ' ');
	if (cmd_args == NULL)
		return (NULL);
	all_paths = get_env_paths(paths);
	if (all_paths == NULL)
		return (free_arg(cmd_args), NULL);
	while (all_paths[++i] != NULL)
	{
		temp_path = ft_strjoin(all_paths[i], "/");
		final_path = ft_strjoin(temp_path, cmd_args[0]);
		free(temp_path);
		if (access(final_path, F_OK | X_OK) == 0)
			return (free_arg(cmd_args), free_arg(all_paths), final_path);
		free(final_path);
	}
	return (free_arg(cmd_args), free_arg(all_paths), cmd);
}