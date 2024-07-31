#include "main.h"

/**
 * print_char - Prints a single character
 * @args: A va_list containing the arguments
 * @spec: A format specifier struct with format options
 *
 * Return: The number of characters printed (1)
 */
int print_char(va_list args, format_specifier_t spec)
{
	char c = (char)va_arg(args, int);

	int count = 0;

	if (spec.width > 1 && !(spec.flags & FLAG_MINUS))
		count += _putchar_multiple(' ', spec.width - 1);

	count += _putchar(c);

	if (spec.width > 1 && (spec.flags & FLAG_MINUS))
		count += _putchar_multiple(' ', spec.width - 1);

	return (count);
}
