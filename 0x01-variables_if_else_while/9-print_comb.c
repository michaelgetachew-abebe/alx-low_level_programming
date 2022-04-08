#include <stdio.h>

int main(void)
{
	int i;
	i = 48;
	while(i<=57)
	{
		putchar(i);
		if (i != 9)
		{
		putchar(44);
		putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
