#include "main.h"

/**
 * reset_to_98 - updates the value of x to 98
 *
 * Description: Prints out two values for x, the initial value and
 * the updated value
 *
 * @x: first parameter
 * @*n: pointer to variable x
 *
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int x;
	int *n;

	n = &x;

	_putchar(x);


	*n = 98;

	_putchar(x);
	_putchar('\n');
}
