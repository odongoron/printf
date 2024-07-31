#include "main.h"

/**
* print_rot13 - Prints a string with ROT13 encryption
* @args: A va_list containing the string to be printed
* @spec: A format specifier struct containing flags, width, precision
*
* Return: The number of characters printed
*/
int print_rot13(va_list args, format_specifier_t spec)
{
	char *str = va_arg(args, char *);

	int count = 0;

	(void)spec;  /* Specifier not used */

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			char offset = (*str >= 'a') ? 'a' : 'A';

			count += _putchar((*str - offset + 13) % 26 + offset);
		}
		else
			count += _putchar(*str);
		str++;
	}

	return (count);
}
