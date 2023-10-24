#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; n > 0; idx++)
	{
		dest[idx] = src[idx];
		n -= 1;
	}
	return (dest);
}
