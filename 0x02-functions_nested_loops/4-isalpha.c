#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet character
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
