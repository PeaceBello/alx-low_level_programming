#include <stdio.h>

/**
 * main - prints all number of base 16 in lowercase
 *
 * Return: 0 always
 */

int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
