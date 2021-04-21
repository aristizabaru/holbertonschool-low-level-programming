#include "search_algos.h"

int binarySearchRecursive(int *array, int left, int right, int value)
{
	int i = NULL;
	int mid = NULL;
	/* base case */
	if (left < right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			return binarySearchRecursive(array, left, mid - 1, value);
		else
			return binarySearchRecursive(array, mid + 1, right, value);
	}

	return -1;
}

/**
 * advanced_binary - find value in a array
 * @array: sorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binarySearchRecursive(array, 0, size - 1, value));
}
