#include "shell.h"

/**
 * _which - identifies the path of the command(*args) that is being passed
 * to it
 * @foundpath: the command that is being passed to it
 * Return: the complete path of the command or 0 when it fails
 */
char **_which(char *foundpath)
{
	int size = TOK_BUFSIZE, i = 0;
	char *copy_path = NULL, *tokens = NULL, *sparse = ":=";
	char **dir = _calloc(sizeof(char *), size);

	if (foundpath == NULL)
	{
		free(foundpath);
		return (0);
	}
	if (dir == NULL)
	{
		free(foundpath);
		perror("Error allocated memory");
		return (NULL);
	}

	copy_path = _strdup(foundpath); /*copy string --> Path*/
	tokens = strtok(copy_path, sparse); /*separate the string by a separator*/
	while (tokens != NULL)
	{
		dir[i] = tokens;
		i++;
		tokens = strtok(NULL, sparse);
	}

	return (dir);
}



