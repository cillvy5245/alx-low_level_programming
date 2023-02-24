#include <stdio.h>
/**
  * main - a program that finds and prints the sum
  *	of the even-valued terms, followed by a new line.
  *
  *
  * Return: Always 0.
  */
int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;
	long add = c;

	while (c + b < 4000000)
	{
		c += b;

		if (c % 2 == 0)
			add += c;

		b = c - b;

		++a;
	}

	printf("%ld\n", add);

	return (0);
}
