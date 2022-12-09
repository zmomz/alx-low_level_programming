#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the number n, followed by:
 *   if the number is greater than 0: is positive
 *   if the number is 0: is zero
 *   if the number is less than 0: is negative
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
