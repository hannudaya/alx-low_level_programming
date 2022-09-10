#include <stdio.h>
/**
 * main-Entry point
 * It prints all single digit of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 1; ch <= 9; ch++)
		printf("%d", ch);
	putchar('\n');
	return (0);
}
