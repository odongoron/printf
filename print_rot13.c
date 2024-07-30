#include "main.h"

/**
* print_rot13 - Prints a string encoded in ROT13
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		char c = *str;

		if ((c >= 'a' && c <= 'z'))
		{
			_putchar(((c - 'a' + 13) % 26) + 'a');
		}
		else if ((c >= 'A' && c <= 'Z'))
		{
			_putchar(((c - 'A' + 13) % 26) + 'A');
		}
		else
		{
			_putchar(c);
		}

		count++;
		str++;
	}

	return (count);
}
