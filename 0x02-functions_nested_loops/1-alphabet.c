#include "main.h"

/**
 * This function prints the alphabet in the correct order
 *
 * Return : Always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n<= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
