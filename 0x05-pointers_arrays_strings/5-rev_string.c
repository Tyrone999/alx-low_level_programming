#include "main.h"

/**
 * rev_string - prints the provided string in reverse
 * @s: The provided string
 */

void rev_string(char *s)
{
	int counter;
	int length;
	char letter;

	counter = 0;
	while (s[counter])
	{
		counter++;
	}
	length = counter;
	counter--;
	for (counter = 0; counter < length / 2; counter++)
	{
		letter = s[counter];
		s[counter] = s[length - 1 - counter];
		s[length - 1 - counter] = letter;
	}
}
