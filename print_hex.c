#include "main.h"

/**
* print_hex - Prints an unsigned integer in hexadecimal format
* @args: A va_list containing the unsigned integer to be printed
* @spec: A format specifier struct containing flags
* @uppercase: Flag to determine whether to print in uppercase or lowercase
*
* Return: The number of characters printed
*/
int print_hex(va_list args, format_specifier_t spec, int uppercase)
{
	unsigned long num;

	if (spec.length == 'l')
		num = va_arg(args, unsigned long);

	else if (spec.length == 'h')
		num = (unsigned short)va_arg(args, unsigned int);

	else
		num = va_arg(args, unsigned int);

	if (spec.flags & FLAG_HASH && num != 0)
		return (_puts(uppercase ? "0X" : "0x") +
		print_number_base(num, 16, uppercase));

	return (print_number_base(num, 16, uppercase));
}
