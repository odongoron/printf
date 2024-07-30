#include "main.h"

/**
* _printf - Produces output according to a format
* @format: Format string
*
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	int count;

	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	count = process_format(format, args);
	va_end(args);

	return (count);
}
