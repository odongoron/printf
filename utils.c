#include "main.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _puts(char *str)
{
    int count = 0;

    while (*str)
    {
        _putchar(*str++);
        count++;
    }
    return (count);
}

void print_number(int n)
{
    unsigned int num = n;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    if (num / 10)
        print_number(num / 10);
    _putchar((num % 10) + '0');
}

void print_unsigned_number(unsigned int n)
{
    if (n / 10)
        print_unsigned_number(n / 10);
    _putchar((n % 10) + '0');
}

int print_hex_digit(int digit)
{
    return (_putchar("0123456789ABCDEF"[digit]));
}

