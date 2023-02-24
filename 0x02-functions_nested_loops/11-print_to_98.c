#include "main.h"
#include <stdio.h>

/**
  * print_to_98 -  a function that prints all natural numbers from n to 98,
  *	followed by a new line.
  *	Prototype: void print_to_98(int n);
  *	Numbers must be separated by a comma, followed by a space
  *	Numbers should be printed in order
  *	The first printed number should be the number passed to your function
  *	The last printed number should be 98
  *	ou are allowed to use the standard library
  *
  *@n: is a variable int
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k < 98; k++)
		{
			printf("%d, ", k);
		}
			}
			else
			{
				for (k = n; k > 98; k--)
				{
					printf("%d, ", k);
				}
			}

				printf("98\n");
}
