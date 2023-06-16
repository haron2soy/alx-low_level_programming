#include <stdio.h>

/**
 * main - Printing upper and lowercase alphabet.
 *
 * Return: Always 0 (no value)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	for (j = 0; j < 52; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
