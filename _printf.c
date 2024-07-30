#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    int (*func)(va_list);

    if (!format)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c': func = print_char; break;
                case 's': func = print_string; break;
                case '%': func = print_percent; break;
                case 'd':
                case 'i': func = print_int; break;
                case 'u': func = print_unsigned; break;
                case 'o': func = print_octal; break;
                case 'x': func = print_hex; break;
                case 'X': func = print_HEX; break;
                case 'p': func = print_pointer; break;
                case 'b': func = print_binary; break;
                case 'S': func = print_special_string; break;
                case 'r': func = print_reversed; break;
                case 'R': func = print_rot13; break;
                default: _putchar('%'); _putchar(*format); count += 2; continue;
            }
            count += func(args);
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return (count);
}

