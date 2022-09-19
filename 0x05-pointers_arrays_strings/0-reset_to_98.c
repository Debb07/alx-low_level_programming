#include "main.h"

/**
 * reset_to_98 - updates the value of x to 98
 *
 * Description: Prints out two values for x, the initial value and
 * the updated value
 *
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int *n;
	int *ip;

	ip = &(*n);

	_putchar((*n));


	*ip = 98;

	_putchar((*n));
	_putchar('\n');
}
