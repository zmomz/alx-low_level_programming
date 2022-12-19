#include "main.h"

/**
 * _strlen - return the length of s
 * @s: string input to be valuated
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
		len++;

	return (len);
}
