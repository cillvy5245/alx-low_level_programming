#include "main.h"

/**
  * _strncat - a function that concatenates two strings.
  *	The _strncat function is similar to the _strcat
  *	function, except that
  *	it will use at most n bytes from src; and
  *	src does not need to be null-terminated if it
  *	contains n or more bytes
  *	Return a pointer to the resulting string dest
  *
  * @dest: The value
  * @src: The value2
  * @n: The concatenation
  *
  * Return: Always 0.
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, c = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (c < n && src[c])
	{
		dest[dlen] = src[c];
		dlen++;
		c++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
