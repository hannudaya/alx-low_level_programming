#include <stdio.h>
/**
 * main-Entry point
 * It prints lowercase letters a to z
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 58; i++)
	{
		for (j = 48; j <= 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i && j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	} putchar('\n');
	return (0);
}
