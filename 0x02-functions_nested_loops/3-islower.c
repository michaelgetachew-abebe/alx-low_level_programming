#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: single letter input
 * Return: Always 1 OR 0 (Success)
 */
int _islower(int c)
{
	if (c > 97)
		return (1);
	else
		return (0);
}
