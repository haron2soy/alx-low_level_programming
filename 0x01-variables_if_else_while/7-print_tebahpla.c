#include <stdio.h>

/**
 * main - prints reverse alphabet and a new line
 * Return: Always 0 (good)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
