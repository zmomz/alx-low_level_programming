#include "main.h"
/**
 * jack_bauer - print clock
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hh;
	int h;
	int mm;
	int m;

	for (hh = 0; hh >= 2; hh++)
	{
		for (h = 0; h >= 3; h++)
		{
			for (mm = 0; mm >= 5; mm++)
			{
				for (m = 0; m >= 9; m++)
				{
					_putchar(hh);
					_putchar(h);
					_putchar(':');
					_putchar(mm);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
