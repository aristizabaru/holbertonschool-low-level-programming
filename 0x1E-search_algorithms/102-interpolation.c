#include "search_algos.h"

/**
 * interpolation_search- find value in a array
 * @array: sorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = NULL;
	size_t mid;

	if (!array || size < 1)
		return (-1);

	high = size - 1;
	while (array[low] != array[high])
	{
		mid =  low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (mid < low || mid > high)
		{
			/* if formula get range out of bounds */
			printf("Value checked array[%lu] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
