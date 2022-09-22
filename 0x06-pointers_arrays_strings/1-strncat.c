#include "main.h"

/**
 * _strncat - man strcat to learn more
 * @dest: destination
 * @src: source
 * @n: Requested N
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	/* store length of dest in the length variable */
	int length = 0;
	int j = 0;
	int srcLength = 0;

	while (dest[length])
	{
		++length;
	}
	while (src[srcLength])
	{
		++srcLength;
	}
	/* concatenate src to dest*/
	for (j = 0; j < n; ++j, ++length)
	{
	
		/* terminating the s1 string */
		if(j > srcLength)
		{
			dest[length] = '\0';
			break;
		}

		dest[length] = src[j];
	}


	return (dest);
}
