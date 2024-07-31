#include "main.h"

/**
* print_special_string - Prints a string with special characters escaped
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_special_string(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (*str == '\n')
		{
			_putchar('\\');
			_putchar('n');
			count += 2;
		}
		else if (*str == '\t')
		{
			_putchar('\\');
			_putchar('t');
			count += 2;
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}
