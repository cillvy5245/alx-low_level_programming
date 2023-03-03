#include "main.h"
#include <stdio.h>

/**
  * reverse_array - a function that reverses the
  *	content of an array of integers
  * @a: An  integers
  * @n: Number of elements
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *p, c, bez, b;

	p = a;

	for (c = 1; c < n; c++)
	{
		p++;
	}

	for (b = 0; b < c / 2; b++)
	{
		bez = a[b];
		a[b] = *p;
		*p = bez;
		p--;
	}
}
