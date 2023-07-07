#include "main.h"

/**
 * factorial - Return the factorial of an integer
 * @n: no to return the factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
