/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    #include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') {
        putchar('\n');
        return;
    }

    putchar(*s);
    _puts_recursion(s + 1);
}
return(0);
}
