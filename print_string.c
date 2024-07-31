#include "main.h"

/**
* print_string - Prints a string
* @args: A va_list containing the string to be printed
* @spec: A format specifier struct containing flags, width, precision, length
*
* Return: The number of characters printed
*/
int print_string(va_list args, format_specifier_t spec)
{
	char *str = va_arg(args, char *);

	int count = 0, len;

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);
	if (spec.precision >= 0 && spec.precision < len)
		len = spec.precision;

	if (spec.width > len && !(spec.flags & FLAG_MINUS))
		count += _putchar_multiple(' ', spec.width - len);

	count += _putnstr(str, len);

	if (spec.width > len && (spec.flags & FLAG_MINUS))
		count += _putchar_multiple(' ', spec.width - len);

	return (count);
}
