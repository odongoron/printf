#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a character to stdout
* @c: the character to print
*
* Return: 1 on success, -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_number - prints an integer
* @n: the integer to print
*
* Return: the number of characters printed
*/
int print_number(int n)
{
	int count = 0;

	int divisor = 1;

	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	while (temp / 10 > 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		n %= divisor;
		divisor /= 10;
		count++;
	}

	return (count);
}

/**
* print_unsigned_number - prints an unsigned integer
* @n: the unsigned integer to print
*
* Return: the number of characters printed
*/
int print_unsigned_number(unsigned int n)
{
	int count = 0;

	unsigned int divisor = 1;

	unsigned int temp = n;

	while (temp / 10 > 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) % 10 + '0');
		n %= divisor;
		divisor /= 10;
		count++;
	}

	return (count);
}

/**
* print_hex_digit - prints a single hexadecimal digit
* @digit: the digit to print
* @uppercase: whether to use uppercase letters
*
* Return: the number of characters printed
*/
int print_hex_digit(int digit, int uppercase)
{
	char c;

	if (digit >= 0 && digit <= 9)
		c = digit + '0';
	else
		c = (digit - 10) + (uppercase ? 'A' : 'a');

	return (_putchar(c));
}
