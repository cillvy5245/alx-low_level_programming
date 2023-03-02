#include "main.h"

/**
  * rev_string - a function that reverses a string.
  *	Prototype: void rev_string(char *s);
  *
  * @s: string
  *
  *
  * Return: ALways 0.
  *
  */
void rev_string(char *s)
{
	int j, b, t;
	char *w, bez;

	w = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (t = 1; t < b; t++)
	{
		w++;
	}

	for (j = 0; j < (b / 2); j++)
	{
		bez = s[j];
		s[j] = *w;
		*w = bez;
		w--;
	}
}

