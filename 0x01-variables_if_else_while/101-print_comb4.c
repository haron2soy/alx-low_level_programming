#include <stdio.h>

/**
 * main – Outputs all various unique combinations of three digits
 * Return: Always 0 (void)
 */
int main(void)
{
	int j, i, l;

	for (j = 48; j < 58; j++)
	{
		for (i = 49; i < 58; i++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > i && i > j)
				{
					putchar(j);
					putchar(i);
					putchar(l);
					if (j != 55 || i != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
