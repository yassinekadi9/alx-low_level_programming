#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 * _isalpha check if character is a letter
 *
 *  both lowercase or uppercase
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
	return (1);
if (c >= 97 && c <= 122)
	return (1);
return (0);
}
