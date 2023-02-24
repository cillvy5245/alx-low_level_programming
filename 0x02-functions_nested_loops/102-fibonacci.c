#include <stdio.h>
/**
  * main - a program that prints the first 50 Fibonacci numbers,
  *	starting with 1 and 2, followed by a new line.
  * The numbers must be separated by comma, followed by a space ,
  * You are allowed to use the standard library
  *
  * Return: Always 0.
  */

int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %ld", c);
		}

		++a;
	}

	printf("\n");

	return (0);
}
