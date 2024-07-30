#include "main.h"

/**
* print_octal - Prints an octal number
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[11];

		int i = 0;

		while (n > 0)
		{
			buffer[i++] = (n % 8) + '0';
			n /= 8;
		}

		while (i > 0)
		{
			_putchar(buffer[--i]);
			count++;
		}
	}

	return (count);
}
