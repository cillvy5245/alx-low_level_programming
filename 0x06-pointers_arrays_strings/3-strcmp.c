#include "main.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: Always value
  */
int _strcmp(char *s1, char *s2)
{
	int m = 0, n = 0, o = 0, p = 0, bez;

	while (s1[m])
	{
		m++;
	}

	while (s2[n])
	{
		n++;
	}

	if (m <= n)
	{
		bez = m;
	}
	else
	{
		bez = m;
	}

	while (o <= bez)
	{
		if (s1[o] == s2[o])
		{
			o++;
			continue;
		}
		else
		{
			p = s1[o] - s2[o];
			break;
		}

		o++;
	}

	return (p);
}

