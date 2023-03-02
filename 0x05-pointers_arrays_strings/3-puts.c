#include "main.h"

/**
  * _puts - a function that prints a string, followed by a new line, to
  *	Prototype: void _puts(char *str);
  *
  * @str: indicate string
  *
  * Return: Always 0.
  */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
