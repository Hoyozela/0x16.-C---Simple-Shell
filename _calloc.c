#include "shell.h"

/**
 * _calloc - allocates memory for an array
 * @prmNumber: character number
 * @prmSize: size of one case
 * Return: allocate memory 
 */
void *_calloc(unsigned int prmNumber, unsigned int prmSize)
{
	char *ptr;
	unsigned int i;

	if (prmNumber == 0 || prmSize == 0)
		return (NULL);

	ptr = malloc(prmSize * prmNumber);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < prmSize * prmNumber; i++)
		ptr[i] = 0;

	return (ptr);
}
