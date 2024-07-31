#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: A va_list containing the unsigned integer to be printed
 * @spec: A format specifier struct containing flags
 *
 * Return: The number of characters printed
 */
int print_octal(va_list args, format_specifier_t spec)
{
	unsigned long num;

	if (spec.length == 'l')
		num = va_arg(args, unsigned long);

	else if (spec.length == 'h')
		num = (unsigned short)va_arg(args, unsigned int);

	else
		num = va_arg(args, unsigned int);

	if (spec.flags & FLAG_HASH && num != 0)
		return (_putchar('0') + print_number_base(num, 8, 0));

	return (print_number_base(num, 8, 0));
}
