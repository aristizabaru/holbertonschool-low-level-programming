#include "search_algos.h"

/**
 * binary_search - find value in a array
 * @array: sorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = NULL;
	int i = 0;

	if (!array || !value)
		return (-1);
	while (left < right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	printf("Searching in array: %d\n", array[right]);
	if (array[right] == value)
		return (array[right]);
	return (-1);
}
