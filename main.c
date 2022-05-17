#include "shell.h"

/**
 * main - creates a prompt to read input, sparses it, executes and awaits
 * another command unless exit command is used
 * @arc: number of arguemnets
 * @arrv: array of arguements
 * @env: environment variable
 * Return: EXIT_SUCCESS
 */
int main(int ac __attribute__((unused)), char **arrv, char **env)
{
	char *line;
	char **args, **path;
	int count = 0, status = 0;
	(void) arrv;
	signal(SIGINT, handle_signal);
	while (1)
	{
		prompt();
		/*read input and return string*/
		line = read_input();
		/*separates string to get command */
		args = sparse_str(line, env);

		if ((_strcmp(args[0], "\n") != 0) && (_strcmp(args[0], "env") != 0))
		{
			count += 1;
			path = search_path(env); /*look for PATH in environment variable*/
			status = _stat(args, path);
			child_process(arrv, args, env, status, count);
		}
		
		else
		{
			free(args);
		}
		free(line);
	}
	return (EXIT_SUCCESS);
}
