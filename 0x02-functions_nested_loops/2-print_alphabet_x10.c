#include "main.h"
/**
 * This prints each alphabet 10 times
 * and in lower case
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char n, counter;

	counter = 0;
	while(counter < 10)
	{

		for (n ='a'; n < = 'z'; n++)
		{
			_putchar (n);
		}
		_putchar('\n');
		counter++;
	}
}
