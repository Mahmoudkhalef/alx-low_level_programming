#include"main.h"

/**
 * Print_alphabet_x10 - function that will print the alphbet 10 times
 *
*/

void Print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
