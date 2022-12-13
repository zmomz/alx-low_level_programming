#include <stdio.h>

/**
 * main - print fibs from 0 to 100
 * Return: Always 0
 */

int main(void)
{
	int fib;
	int a = 0;
	int b = 1;
	int counter = 0;

	while (counter <= 50)
	{
		fib = a + b;
		printf("%i, ", fib);
		a = b;
		b = fib;
		counter++;
	}
	printf("\n");

	return (0);
}
