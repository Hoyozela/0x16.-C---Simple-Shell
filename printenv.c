#include "shell.h"

/**
 * func_printenv - prints the current environment
 * @envi: environment variable
 */
void func_printenv(char **environ)
{
	int i = 0;

	for (; environ[i] ; i++)
		_puts(environ[i]); /*print enviroment*/
}
