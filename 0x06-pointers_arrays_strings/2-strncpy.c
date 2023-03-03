#include "main.h"

/**
  * _strncpy - a function that copies a string.
  * @dest: The value
  * @src: The other value
  * @n: The limit
  *
  * Return: Always return
  */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0, s = 0;

	while (src[s])
	{
		s++;
	}

	while (m < n && src[m])
	{
		dest[m] = src[m];
		m++;
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}

