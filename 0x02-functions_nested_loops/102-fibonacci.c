#include <stdio.h>

/**
 * main - print fibs from 0 to 100
 * Return: Always 0
 */

int main(void)
{
	long int fib;
	long int a = 0;
	long int b = 1;
	int counter = 0;

	while (counter < 49)
	{
		fib = a + b;
		printf("%li, ", fib);
		a = b;
		b = fib;
		counter++;
	}
	fib = a + b;
	printf("%li\n", fib);

	return (0);
}
