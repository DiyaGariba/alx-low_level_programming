#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 *
 * Return: stdout
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
