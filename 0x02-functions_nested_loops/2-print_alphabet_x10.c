#include "main.h"
/**
* print_alphabet - utilizes on the _putchar function
* the alphabet a - z
* 10 times
*/

void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
{
	for (x = 'a'; x <= 'z'; x++)

		_putchar(x);
	_putchar('\n');

	return (0);
}

}

