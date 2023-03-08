#include "main.h"

/**
  * _strchr - a function that locates a character in a string.
  *	Prototype: char *_strchr(char *s, char c);
  *	Returns a pointer to the first occurrence of the
  *	character c in the string s, or NULL if the character is not found
  *
  * @s: is a pointer
  * @c: is an integer
  *
  * Return: a pointer to char c.
  */

char *_strchr(char *s, char c)
{
	int m = 0, b;

	while (s[m])
	{
		m++;
	}

	for (b = 0; b <= m; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
