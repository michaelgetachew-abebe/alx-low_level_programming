#include "main.h"
/**
 * _abs - calculates the absolute value of a number
 * @ab: integer input 
 * Return: Absolute value of ab
 */
int _abs(int ab)
{
	int n;

	if (ab > 0)
		n = ab;
	else if (ab < 0)
		n = -1 * ab;
	else
		n = 0;

	return (n);
}

