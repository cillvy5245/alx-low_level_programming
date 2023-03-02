#include "main.h"

/**
  * swap_int - a function that swaps the values of two integers.
  *	Prototype: void swap_int(int *a, int *b);
  * @a: indicate pointer1
  * @b: indicate pointer2
  *
  * Return: Always 0.
  *
  */

void swap_int(int *a, int *b)
{
	int bez;

	bez = *a;

	*a = *b;

	*b = bez;
}
