#include "main.h"
/**
 * _strlen_recursion - Return length of a string.
 * @s: The strng to be measured.
 *
 * Return: lenth of string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
