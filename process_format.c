#include "main.h"

/**
* process_format - Processes each format specifier in the format string
* @format: The format string
* @args: The variadic arguments list
*
* Return: Number of characters printed
*/
int process_format(const char *format, va_list args)
{
	int count = 0;

	print_func func;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			func = get_print_func(*format);
			if (func)
			{
				count += func(args);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
