#include "main.h"

/**
* print_reversed - Prints a string in reverse
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_reversed(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[len])
		len++;

	while (len > 0)
	{
		_putchar(str[--len]);
		count++;
	}

	return (count);
}
