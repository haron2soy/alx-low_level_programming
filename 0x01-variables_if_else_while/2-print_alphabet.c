#include <stdio.h>

/**
 * main - Use putchar on alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
