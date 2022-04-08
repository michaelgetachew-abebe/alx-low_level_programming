#include <stdio.h>

int main(void)
{
	int i;
	int j;
	i=48;
	j=48;
	while(i<=57)
	{
		while(j<=57)
		{
			if(j>i)
			{
				putchar(i);
				putchar(j);
				if (j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
