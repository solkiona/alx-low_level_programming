#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    int i = 97;
    while (i <= 122)
    {
     _putchar(i);
     i++;
    }
    _putchar("\n");
}
