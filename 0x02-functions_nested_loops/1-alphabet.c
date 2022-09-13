#include "main.h"

/**
 * print - alphabet in small letters
 * Return: always 0
 */

void print_alphabet(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}
