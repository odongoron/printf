#include "main.h"

/**
* print_int - Prints an integer
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_int(va_list args)
{
	int n = va_arg(args, int);

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	count += print_number(n);

	return (count);
}
