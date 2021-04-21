#include "search_algos.h"

/**
 * binary_search_explonential - find value in a array
 * @array: sorted values
 * @left: left bound of the array
 * @right: right boud of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int binary_search_explonential(int *array, int left, int right, int value)
{

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

/**
 * exponential_search - find value in a array
 * @array: sorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1;
	int result = NULL;
	int right = NULL;
	int left = NULL;

	if (array[0] == value)
		return (0);

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	if (i < (int)size)
		right = i;
	else
		right = size - 1;
	left = i / 2;
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	result = binary_search_explonential(array, left, right, value);

	if (result != -1)
		return (result);
	return (-1);
}
