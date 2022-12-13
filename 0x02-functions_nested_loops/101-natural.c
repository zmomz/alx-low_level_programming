#include <stdio.h>
/**
 * main - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 * Return: 0 Always
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) | (((i % 5) == 0)))
			sum += i;
	}
	printf("%i\n", sum);

	return (0);
}
