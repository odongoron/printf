#include "main.h"

/**
* print_HEX - Prints a hexadecimal number (uppercase)
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_HEX(va_list args)
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
		char buffer[9];

		int i = 0;

		while (n > 0)
		{
			int digit = n % 16;

			buffer[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'A');
			n /= 16;
		}

		while (i > 0)
		{
			_putchar(buffer[--i]);
			count++;
		}
	}

	return (count);
}
