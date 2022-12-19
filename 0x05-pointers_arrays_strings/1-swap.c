#include "main.h"
/**
 * swap_int - swap values between` a & b
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
