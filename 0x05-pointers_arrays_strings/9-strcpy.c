#include "main.h"

/**
 * _strcpy - string copy
 * @dest: destination
 * @src: source
 * Return: returns the copied to char
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
