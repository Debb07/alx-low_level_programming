#include <stdio.h>

/**
 * main - print prime numbers
 * Return: o
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= 1;
	}
	printf("%lu\n", n);
	return (0);
}
