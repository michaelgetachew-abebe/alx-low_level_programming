#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input number
 * Return: 1 if n > 0 0 if n==0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n < 0)
	{
		_putchar ('0');
		return (-1);
	}
	else
	{
		_putchar ('-');
		return (0);
	}
}
