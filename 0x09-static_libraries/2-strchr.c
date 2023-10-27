#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to find
 * Return: to the first occurrence of the character c in the string s, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
