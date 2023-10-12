#include "function_pointers.h"
/**
 * array_iterator - iterates through members of an array
 * @array: array to be iterated
 * @size: length of the array
 * @action: funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
