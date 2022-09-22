#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first char array
 * @s2: second char array
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
