#include <stdio.h>

/**
  * main - a program that computes and prints
  *	the sum of all the multiples of 3
  *	or 5 below 1024 (excluded), followed by a new line.
  *
  *
  * Return: Always 0.
  *
  */

int main(void)
{
	int k, c = 0;

	while (k < 1024)
	{
		if ((k % 3 == 0) || (k % 5 == 0))
		{
			c += k;
		}

		k++;
	}

	printf("%d\n", c);

	return (0);
}
