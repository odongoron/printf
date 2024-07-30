#include "main.h"

/**
* print_binary - Prints a binary number
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_binary(va_list args)
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
		char buffer[32];

		int i = 0;

		while (n > 0)
		{
			buffer[i++] = (n % 2) + '0';
			n /= 2;
		}

		while (i > 0)
		{
			_putchar(buffer[--i]);
			count++;
		}
	}

	return (count);
}
