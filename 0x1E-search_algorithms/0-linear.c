#include "search_algos.h"

/**
 * linear_search - find value in a array
 * @array: unsorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int result = -1;
	unsigned int i = 0;

	if (!array)
		return (result);
	for (; i < size; i++)
	{
		if (array[i] == value)
		{
			result = i;
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (result);
}
