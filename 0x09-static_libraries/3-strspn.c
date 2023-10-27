#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char pointer
 *
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int cont1, cont2;

	for (cont1 = 0; s[cont1] != '\0'; cont1++)
	{
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			if (s[cont1] == accept[cont2])
			{
				break;
			}
		}
			if (!(accept[cont2]))
			{
				break;
			}
	}
	return (cont1);
}
