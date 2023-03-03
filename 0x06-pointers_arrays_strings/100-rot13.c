#include "main.h"
#include <stdio.h>

/**
  * rot13 - a function that encodes a string using rot13
  * @s: a string
  *
  * Return: Always 0
  */
char *rot13(char *s)
{
	int m = 0;

	while (s[m])
	{
		while ((s[m] >= 'a' && s[m] <= 'z') || (s[m] >= 'A' && s[m] <= 'Z'))
		{
			if ((s[m] > 'm' && s[m] <= 'z') || (s[m] > 'M' && s[m] <= 'Z'))
			{
				s[m] -= 13;
				break;
			}

			s[m] += 13;
			break;
		}

		m++;
	}

	return (s);
}
