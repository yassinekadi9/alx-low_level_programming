#include "main.h"

/**
* _islower  - function to check if character is lowercase
* Return: return 1 if 'c' is lowercase 
* @c: checks input of function
* * otherwise always 0 (success)
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
