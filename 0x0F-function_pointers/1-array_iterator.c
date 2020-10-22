#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of intengers
 * @size: size of the array
 * @action: pointer fo function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
