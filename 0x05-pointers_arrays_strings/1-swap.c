#include <stdio.h>
#include "main.h"

/**
 * swap_int - this function swaps the value of two integers
 *
 * @a - pointer dereference for changing the value of the variable a
 * @b - pointer derefernce for changing the value of the variable b
 * int c: assigning the address of the variable a to c
 *
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

