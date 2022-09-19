#include "main.h"

/**
 * _strlen - returns the length of the provided string
 * @s: The provided string
 * Return: returns the length of s
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter])
	{
		counter++;
	}
	return (counter);
}
