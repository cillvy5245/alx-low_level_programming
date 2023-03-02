#include <unistd.h>

/**
  * _putchar - write a character c to stdout
  * @c: is a character
  *
  *
  * Return: Always 0;
  * On error, -1 is returned, and error is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
