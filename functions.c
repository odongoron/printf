#include "main.h"

int print_char(va_list args)
{
    return (_putchar(va_arg(args, int)));
}

int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
        str = "(null)";
    return (_puts(str));
}

int print_percent(va_list args)
{
    (void)args;
    return (_putchar('%'));
}

int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;

    if (n < 0)
        count++;
    print_number(n);
    return (count);
}

int print_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    print_unsigned_number(n);
    return (0);
}

int print_octal(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[11];
    int i = 10;

    buffer[i] = '\0';
    if (n == 0)
        return (_putchar('0'));
    while (n > 0)
    {
        buffer[--i] = (n % 8) + '0';
        n /= 8;
    }
    return (_puts(&buffer[i]));
}

int print_hex(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[9];
    int i = 8;

    buffer[i] = '\0';
    if (n == 0)
        return (_putchar('0'));
    while (n > 0)
    {
        buffer[--i] = "0123456789abcdef"[n % 16];
        n /= 16;
    }
    return (_puts(&buffer[i]));
}

int print_HEX(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[9];
    int i = 8;

    buffer[i] = '\0';
    if (n == 0)
        return (_putchar('0'));
    while (n > 0)
    {
        buffer[--i] = "0123456789ABCDEF"[n % 16];
        n /= 16;
    }
    return (_puts(&buffer[i]));
}

int print_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    unsigned long int n = (unsigned long int)ptr;
    char buffer[17];
    int i = 16;

    buffer[i] = '\0';
    if (n == 0)
        return (_puts("(nil)"));
    while (n > 0)
    {
        buffer[--i] = "0123456789abcdef"[n % 16];
        n /= 16;
    }
    return (_puts("0x") + _puts(&buffer[i]));
}

int print_binary(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[33];
    int i = 32;

    buffer[i] = '\0';
    if (n == 0)
        return (_putchar('0'));
    while (n > 0)
    {
        buffer[--i] = (n % 2) + '0';
        n /= 2;
    }
    return (_puts(&buffer[i]));
}

int print_special_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            _putchar('\\');
            _putchar('x');
            if (*str < 16)
                _putchar('0');
            count += 4;
            count += print_hex_digit((*str) / 16);
            count += print_hex_digit((*str) % 16);
        }
        else
        {
            _putchar(*str);
            count++;
        }
        str++;
    }
    return (count);
}

int print_reversed(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;
    int i;

    if (str == NULL)
        str = "(null)";
    while (str[len])
        len++;
    for (i = len - 1; i >= 0; i--)
        _putchar(str[i]);
    return (len);
}

int print_rot13(va_list args)
{
    char *str = va_arg(args, char *);
    int i;
    char c;

    for (i = 0; str[i]; i++)
    {
        c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
                c += 13;
            else
                c -= 13;
        }
        _putchar(c);
    }
    return (i);
}