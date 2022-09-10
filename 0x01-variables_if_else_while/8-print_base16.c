#include <stdio.h>
/**
 * main-Entry point
 * It prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[16] = "0123456789abcdef";

	int i;

	for (i = 0; i <= 15; i++)
		putchar (ch[i]);
	putchar('\n');
	return (0);
}
