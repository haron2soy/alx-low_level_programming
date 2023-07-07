#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to output
 *
 * Return: On success 1.
 * On error, -1 is returned and err set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
