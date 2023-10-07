#include <stdio.h>

/**
 * main - this is a function that prints alphabets in lowercases
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
