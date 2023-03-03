#include "main.h"
#include <stdio.h>

/**
  * _strcat - a function that concatenates two strings.
  *	Prototype: char *_strcat(char *dest, char *src);
  *	This function appends the src string to the dest string,
  *	overwriting the terminating null byte (\0) at the end of dest,
  *	and then adds a terminating null byte
  *	Returns a pointer to the resulting string dest
  * @dest: The string
  * @src: The string
  *
  * Return: Always 0.
  */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, k;

	while (dest[dlen])
	{
		dlen++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[dlen] = src[k];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

