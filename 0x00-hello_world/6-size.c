#include <stdio.h>

/**
  * main - Entry pont
  *
  *Return: Always is 0 (success)
  */

int main(void)
{
	char joy;
	int me;
	long int we;
	long long int be;
	float cool;

	prinf("Size of a char: %lu byte(s)\n", sizeof(joy));
	printf("Size of an int: %lu byte(s)\n", sizeof(me));
	printf("Size of a long int: %lu byte(s)\n", sizeof(we));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(be));
	printf("Size of a float: %lu byte(s)\n", sizeof(cool));

	return (0);
}

