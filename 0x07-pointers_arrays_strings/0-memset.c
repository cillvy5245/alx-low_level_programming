#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte.
  * The _memset() function fills the first n bytes of the memory
  *	area pointed to by s with the constant byte b
  *
  * @s: is a pointer
  * @b: is char variable
  * @n: is an integer var
  *
  * Return: this return s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}

	return (s);
}

