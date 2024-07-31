#include "main.h"

/**
* print_special_string - Prints a string with non-printable characters
*                      in hexadecimal format
* @args: A va_list containing the string to be printed
* @spec: A format specifier struct containing flags, width, precision
*
* Return: The number of characters printed
*/
int print_special_string(va_list args, format_specifier_t spec)
{
	char *str = va_arg(args, char *);

	int count = 0;

	(void)spec;  /* Specifier not used */

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((*str / 16 < 10) ? (*str / 16 + '0') :
			(*str / 16 - 10 + 'A'));
			count += _putchar((*str % 16 < 10) ? (*str % 16 + '0') :
			(*str % 16 - 10 + 'A'));
		}
		else
			count += _putchar(*str);
		str++;
	}

	return (count);
}
