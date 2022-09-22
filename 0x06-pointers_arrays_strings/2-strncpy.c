#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: Requested N
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* concatenate src to dest*/
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
