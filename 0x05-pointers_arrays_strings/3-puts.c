#include "main.h"

/**
 * _puts - print a string to the stdout
 * @str: input to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
