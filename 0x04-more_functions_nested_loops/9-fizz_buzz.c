#include <stdio.h>

/**
 * main - program that prints either number
 *
 * or fizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int count;

	for (count = 1; count < 100; count++)
	{
		if ((count % 5 == 0) && (count % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("Buzz\n");
	return (0);
}
