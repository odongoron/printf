#include "main.h"

/**
* print_reversed - Prints a string in reverse order
* @args: A va_list containing the string to be printed
* @spec: A format specifier struct containing flags, width, precision
*
* Return: The number of characters printed
*/
int print_reversed(va_list args, format_specifier_t spec)
{
	char *str = va_arg(args, char *);

	int len, count = 0;

	(void)spec;  /* Specifier not used */

	if (str == NULL)
		str = "(null)";

	len = _strlen(str);

	while (len--)
		count += _putchar(str[len]);

	return (count);
}
