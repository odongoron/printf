#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    format_specifier_t spec;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            spec = parse_format(&format, args);

            switch (spec.specifier)
            {
                case 'c':
                    count += print_char(args, spec);
                    break;
                case 's':
                    count += print_string(args, spec);
                    break;
                case 'd':
                case 'i':
                    count += print_int(args, spec);
                    break;
                case 'u':
                    count += print_unsigned_int(args, spec);
                    break;
                case 'o':
                    count += print_octal(args, spec);
                    break;
                case 'x':
                    count += print_hex(args, spec, 0);
                    break;
                case 'X':
                    count += print_hex(args, spec, 1);
                    break;
                case 'b':
                    count += print_binary(args, spec);
                    break;
                case 'p':
                    count += print_pointer(args, spec);
                    break;
                case 'S':
                    count += print_special_string(args, spec);
                    break;
                case 'r':
                    count += print_reversed(args, spec);
                    break;
                case 'R':
                    count += print_rot13(args, spec);
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    _putchar('%');
                    _putchar(*format);
                    count += 2;
                    break;
            }
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
