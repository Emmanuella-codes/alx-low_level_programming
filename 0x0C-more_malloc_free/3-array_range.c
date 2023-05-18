#include "main.h"
#include <stdlib.h>

/**
  * array_range- creates an array of integers.
  * @min: minimum number.
  * @max: maximum number.
  * Return: on success, pointer to the newly created array.
  *         on failure or if min > max, NULL.
  */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
