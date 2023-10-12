#include "function_pointers.h"
/**
 * int_index - compares a digit with a member of an array
 * @array: array of values
 * @size: length of the array
 * @cmp: funtion pointer
 *
 * Return: index to the 1st accurrence of similarity
 * -1 (unsuccesful)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int valueReturned;
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		valueReturned = cmp(array[i]);
		if (valueReturned == 1)
			break;
		i++;
	}
	if (valueReturned == 1)
		return (i);
	else
		return (-1);
}
