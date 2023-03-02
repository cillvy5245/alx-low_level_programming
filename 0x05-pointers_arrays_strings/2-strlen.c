#include "main.h"

/**
  * _strlen - Write a function that returns the length of a string
  *	Prototype: int _strlen(char *s);
  * @s: indicate a pinter
  *
  * Return: Always 0.
  */

int _strlen(char *s)
{
	int k = 0;

	for (; *s != '\0'; s++)
	{

	k++;

	}

	return (k);
}
