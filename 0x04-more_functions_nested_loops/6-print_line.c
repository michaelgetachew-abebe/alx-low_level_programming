#include "main.h"

/**
 * print_line - draw a staright line
 * @n: length of the line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}

