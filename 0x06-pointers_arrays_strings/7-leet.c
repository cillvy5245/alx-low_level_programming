#include "main.h"

/**
  * leet - a function that encodes a string into 1337.
  * @s: The string
  *
  *
  *
  *
  * Return: Always 0.
  */
char *leet(char *s)
{
	int m = 0, n = 0, o = 5;
	char p[5] = {'A', 'E', 'O', 'T', 'L'};
	char q[5] = {'4', '3', '0', '7', '1'};

	while (s[m])
	{
		n = 0;

		while (n < o)
		{
			if (s[m] == p[n] || s[m] - 32 == p[n])
			{
				s[m] = q[n];
			}

			n++;
		}

		m++;
	}

	return (s);
}

