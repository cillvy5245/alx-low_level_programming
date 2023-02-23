#include "main.h"

/**
  *  _abs - a function that computes the absolute value of an integer.
  *
  *	Prototype: int _abs(int);
  * @k: checks number
  * Return: Always 0.
  */
int _abs(int k)
{
	if (k < 0)
	{
		return (-k);
	}
	else
	{
		return (k);
	}
}
