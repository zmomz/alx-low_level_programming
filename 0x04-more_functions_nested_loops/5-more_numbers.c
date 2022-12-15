#include "main.h"

/**
 * more_numbers - prints numbers 0-14, 10 times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
char a = '1';
char c;
int i;

for (i = 0; i <= 9; i++)
{
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}

for (c = '0'; c <= '4'; c++)
{
_putchar(a);
_putchar(c);
}
_putchar('\n');
}
}
