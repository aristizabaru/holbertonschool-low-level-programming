#include "search_algos.h"

/**
 * binarySearchRecursive - find value in a array
 * @array: sorted values
 * @left: left bound of the array
 * @right: right bound of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int binarySearchRecursive(int *array, int left, int right, int value)
{
	int i = NULL;
	int mid = NULL;
	/* base case */
	if (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		/* change algo to keep looking if value is found in a previous index */
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		else if (array[mid] >= value)
			return (binarySearchRecursive(array, left, mid, value));

		return (binarySearchRecursive(array, mid + 1, right, value));
	}

	return (-1);
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
	if (!array || !size)
		return (-1);

	return (binarySearchRecursive(array, 0, size - 1, value));
}
