#include "main.h"
/**
 * reverse_array - reverses a string
 * @a: string to be reversed
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int storeno;

	for (i = 0 ; i < n / 2 ; i++)
	{
		storeno = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = storeno;
	}
}
