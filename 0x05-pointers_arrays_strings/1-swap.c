#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a - pointer dereference for changing the values
 * @b - pointer derefernce for changing the values
 * int c: assigning the address of the swapped values
 *
 * Description: swaps two numbers
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

