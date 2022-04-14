#include <stdio.h>

/**
 * main - prints Fizz to multiples of 3
 * and Buzz to multiples of 5
 * 
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
