#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		for (j = i; j == 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

