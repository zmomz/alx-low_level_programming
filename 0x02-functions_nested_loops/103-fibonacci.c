#include <stdio.h>

/**
 * main - print fibs from 0 to 100
 * Return: Always 0
 */

int main(void)
{
	long int fib;
	long int a = 1;
	long int b = 2;
	long int even_fib = 0;

	while (fib < 4000000)
	{
		fib = a + b;
		if (((a % 2) == 0) & ((b % 2) == 0))
		{
			even_fib = fib;
			printf("%li, ", even_fib);
		}
		a = b;
		b = fib;
	}
	printf("\n");

	return (0);
}
