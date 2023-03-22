#include "main.h"
/**
* print_alphabet_x10 - utilizes on the _putchar function
* the alphabet a - z
* 10 times
*/
void print_alphabet_x10(void)
{
int x, y;

for (y = 0; y <= 9; y++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
