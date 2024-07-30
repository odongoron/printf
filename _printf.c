#include "main.h"
#include <stdio.h>

/**
 * _printf - Produces output according to a format.
 * @format: A format string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    const char *p = format;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*p)
    {
        if (*p == '%')
        {
            p++;
            if (*p == '\0')
                break;

            if (*p == 'r' || *p == 'n')
            {
                count += printf("%s", p - 1);
                p += 2;
                continue;
            }

            switch (*p)
            {
                case 'c':
                    count += print_char(args);
                    break;
                case 's':
                    count += print_string(args);
                    break;
                case '%':
                    count += print_percent(args);
                    break;
                case 'd':
                case 'i':
                    count += print_int(args);
                    break;
                case 'u':
                    count += print_unsigned(args);
                    break;
                case 'o':
                    count += print_octal(args);
                    break;
                case 'x':
                case 'X':
                    count += print_hex(args, *p);
                    break;
                case 'p':
                    count += print_pointer(args);
                    break;
                case 'b':
                    count += print_binary(args);
                    break;
                case 'S':
                    count += print_special_string(args);
                    break;
                case 'r':
                    count += print_reversed(args);
                    break;
                case 'R':
                    count += print_rot13(args);
                    break;
                default:
                    _putchar('%');
                    _putchar(*p);
                    count += 2;
                    continue;
            }
        }
        else
        {
            _putchar(*p);
            count++;
        }
        p++;
    }

    va_end(args);
    return (count);
}
