#include "main.h"

/**
 * cap_string - function that capitalize first character of a word
 *
 * @str: string to capitalize
 *
 * Return:returns the capitalized string
 */

char *cap_string(char *str)
{
	int count;

/*  scan through string */
	count = 0;
	while (s[count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
				|| s[count] == ',' || s[count] == ';' || s[count] == '.'
				|| s[count] == '.' || s[count] == '!' || s[count] == '?'
				|| s[count] == '"' || s[count] == '(' || s[count] == ')'
				|| s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
