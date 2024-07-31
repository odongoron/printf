#include "main.h"

/**
* print_string - Prints a string
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}
