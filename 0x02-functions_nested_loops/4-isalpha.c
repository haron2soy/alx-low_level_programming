#include "main.h"

/**
 * _isalpha - check alphabetic character
 * @c: the character to be checkd
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
