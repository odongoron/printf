#include "main.h"

/**
* print_unsigned_int - Prints an unsigned integer
* @args: A va_list containing the unsigned integer to be printed
* @spec: A format specifier struct containing flags, width, precision, length
*
* Return: The number of characters printed
*/
int print_unsigned_int(va_list args, format_specifier_t spec)
{
	unsigned long num;

	if (spec.length == 'l')
		num = va_arg(args, unsigned long);

	else if (spec.length == 'h')
		num = (unsigned short)va_arg(args, unsigned int);

	else
		num = va_arg(args, unsigned int);

	return (print_number_with_flags(num, spec));
}
