#include "main.h"

/**
 * rev_string - reverse a string then prints it
 * @s: input string
 */

void rev_string(char *s)
{
	int i, len, temp;

	i = 0;
	len = 0;

	while (s[len++] != '\0')
		;
	len -= 2;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
}
