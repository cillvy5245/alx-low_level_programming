#include "main.h"

/**
  * _memcpy - a function that copies memory area.
  *	Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
  *	The _memcpy() function copies n bytes from
  *	memory area src to memory area dest
  *
  * @dest: is a pointer
  * @src: is a pointer
  * @n: is an integer
  *
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
