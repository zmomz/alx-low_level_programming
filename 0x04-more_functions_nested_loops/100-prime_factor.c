#include<stdio.h>
#include<math.h>
/**
 * main - print the largest prime factor for a num
 * Return: 0 always
 */

int main(void)
{
	int i, max = -1;
	long long int n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%i\n", max);

	return (0);
}
