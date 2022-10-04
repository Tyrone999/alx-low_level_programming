#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: Size of the array
 * @c: Initializer
 * Return: Array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return ('\0');

	array = malloc(size);

	if (array == NULL)
		return ('\0');

	for (index = 0; index < size; index++)
		array[index] = c;

	array[size] = '\0';

	return (array);
}
