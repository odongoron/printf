#include "main.h"

/**
* print_pointer - Prints a pointer address
* @args: Variadic arguments list
*
* Return: Number of characters printed
*/
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);

	unsigned long n = (unsigned long)ptr;

	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[16];

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
