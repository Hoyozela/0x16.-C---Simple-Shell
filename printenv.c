#include "shell.h"

/**
 * func_printenv - prints the current environment
 * @envi: environment variable
 */
void func_printenv(char **envi)
{
	int i = 0;

	for (; envi[i] ; i++)
		_puts(envi[i]); /*print tne environment*/
}
