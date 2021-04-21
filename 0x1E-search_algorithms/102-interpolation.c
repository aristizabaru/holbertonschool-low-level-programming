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
	int low = 0;
	int high = NULL;
	int mid;

	if (!array || !size)
		return (-1);

	high = size - 1;
	while ((array[high] != array[low]) && (value >= array[low])
		&& (value <= array[high]))
	{
		mid =  low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
