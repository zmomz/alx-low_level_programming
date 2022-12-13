#include "main.h"

 /**
 * times_table - print times table from 0 to 9
 */
void times_table(void)
{
int i, j, n;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		n = i * j;
		if ((i == 0) & (j == 0))
			_putchar('0');
		else if (n <= 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((n % 10) + '0');
			if (j != 9)
				_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (j != 9)
				_putchar(',');
		}
	if (j == 9)
		_putchar('\n');
	}
}
}
