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

	prinf("Size of a char: %zu byte(s)\n", sizeof(joy));
	printf("Size of an int: %zu byte(s)\n", sizeof(me));
	printf("Size of a long int: %zu byte(s)\n", sizeof(we));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(be));
	printf("Size of a float: %zu byte(s)\n", sizeof(cool));

	return (0);
}

