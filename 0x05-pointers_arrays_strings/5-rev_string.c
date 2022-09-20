#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: String to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int len;
	char newStr;

	i = 0;
	len = _strlen(s) - 1;


	while (len >= i)
	{
		newStr = s[len]; /*newStr == n*/
		s[len] = s[i]; /*s[len] == H*/
		s[i] = newStr; /*s[i] == n*/
		len--;
		i++;
	}
}
