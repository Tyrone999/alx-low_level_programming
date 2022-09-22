#include "main.h"

/**
 * cap_string - Makes lowercase strings uppercase
 * @s: string
 * Return: returns the array
 */

char *cap_string(char *s)
{
	int i = 0;
	int boolVal = 1;

	while (s[i])
	{
		if (boolVal == 1)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] = s[i] - 32;
			}
			boolVal = 0;
		}
		if (s[i] == ' ' ||
		    s[i] == '\t' ||
		    s[i] == '\n' ||
		    s[i] == ',' ||
		    s[i] == ';' ||
		    s[i] == '.' ||
		    s[i] == '!' ||
		    s[i] == '?' ||
		    s[i] == '"' ||
		    s[i] == '(' ||
		    s[i] == ')' ||
		    s[i] == '{' ||
		    s[i] == '}')
			boolVal = 1;
		i++;
	}
	return (s);
}
