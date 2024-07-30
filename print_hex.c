#include "main.h"

/**
* print_hex - Prints a hexadecimal number (lowercase)
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_hex(va_list args)
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

			buffer[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
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
