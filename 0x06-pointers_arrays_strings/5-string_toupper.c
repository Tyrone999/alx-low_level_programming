#include "main.h"

/**
 * string_toupper - Makes lowercase uppercase
 * @s: string
 * Return: returns the uppercase char array
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
