#include "search_algos.h"

/**
 * jump_search - find value in a array
 * @array: sorted values
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	/* calculates intial jump */
	unsigned int right = sqrt(size);
	unsigned int i = 0;

	if (!array || value < 0)
		return (-1);

	while (array[right] < value && right < size)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		/* move one jump if it is not the correct block */
		left = right;
		right += sqrt(size);
		/* if right exceeds then bound the range */
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	if (right > size - 1)
		right = size - 1;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		/* linear search when correct block found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
