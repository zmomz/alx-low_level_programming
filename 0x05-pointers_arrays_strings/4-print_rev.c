#include "main.h"

/**
 * print_rev - print the reverse string
 * @s: input to ve reversed
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
