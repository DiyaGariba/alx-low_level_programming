#include <stdio.h>

/**
 * main - this a function that prints alphabets in lower case
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
