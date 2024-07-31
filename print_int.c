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

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[10];

		int i = 0;

		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}

		while (i > 0)
		{
			_putchar(buffer[--i]);
			count++;
		}
	}

	return (count);
}
