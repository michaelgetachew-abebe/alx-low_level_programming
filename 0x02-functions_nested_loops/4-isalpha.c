#include "main.h"

/**
 * _isalpha - a function that checks for an alphabet
 * @c: letter input
 * Return: 1 or 0 to the output
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 92)
		return (1);
	else if (c >= 97 && c < 124)
		return (1);
	else
		return (0);
}
