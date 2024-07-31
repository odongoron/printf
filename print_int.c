#include "main.h"

/**
 * print_int - Prints an integer
 * @args: A va_list containing the integer to be printed
 * @spec: A format specifier struct containing flags, width, precision, length
 *
 * Return: The number of characters printed
 */
int print_int(va_list args, format_specifier_t spec)
{
	long num;

	if (spec.length == 'l')
		num = va_arg(args, long);
	else if (spec.length == 'h')
		num = (short)va_arg(args, int);
	else
		num = va_arg(args, int);

	return (print_number_with_flags(num, spec));
}
