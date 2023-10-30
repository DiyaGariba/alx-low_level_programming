#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of characters
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ac = (char *) malloc(sizeof(char) * size);

	if (ac == NULL)
		return (0);

	while (i < size)
	{
		*(ac + i) = c;
		i++;
	}

	*(ac + i) = '\0';

	return (ac);
}
