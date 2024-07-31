#include "main.h"

/**
 * _print_binary - Prints an unsigned integer in binary format
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_binary(va_list args, format_specifier_t spec)

{
	unsigned int num = va_arg(args, unsigned int);

	(void)spec;
	return print_number_base(num, 2, 0);
}