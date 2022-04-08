#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i;

	for (i='A';i<='Z';i++)
	{
		i = tolower(i);
		putchar(i);
	}
	putchar('\n);
	return (0);
}
