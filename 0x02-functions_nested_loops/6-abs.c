#include "main.h"

/**
 * _abs - function that computes the absolute
 *              value of an integer
 * @n: taked in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int c)
{
if (c < 0)
{
c = (-1) * c;
return (c);
}
