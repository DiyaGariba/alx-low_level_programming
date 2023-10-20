#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < (n / 2); y++)
	{
		z = a[y];
		a[y] = a[n - y - 1];
		a[n - y - 1] = z;
	}
}
