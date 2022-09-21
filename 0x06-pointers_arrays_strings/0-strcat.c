#include "main.h"

/**
 * _strcat - man strcat to learn more
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	/* store length of dest in the length variable */
	int length = 0;
	int j = 0;

	while (dest[length])
	{
		++length;
	}
	/* concatenate src to dest*/
	for (j = 0; src[j]; ++j, ++length)
	{
		dest[length] = src[j];
	}
	/* terminating the s1 string */
	dest[length] = '\0';

	return (dest);
}
