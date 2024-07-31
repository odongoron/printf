#include "main.h"

int _putchar(char c)
{
	return write(1, &c, 1);
}

int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

int _putchar_multiple(char c, int count)
{
	int i;

	for (i = 0; i < count; i++)
		_putchar(c);

	return (count);
}

int _putnstr(char *str, int n)
{
	int i;

	for (i = 0; i < n && str[i]; i++)
		_putchar(str[i]);

	return (i);
}

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

int _numlen(long num, int base)
{
	int len = 1;

	while (num /= base)
		len++;

	return (len);
}

int print_number_base(unsigned long num, int base, int uppercase)
{
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	char buffer[65];

	int i = 64;

	buffer[i] = '\0';

	do {
		buffer[--i] = digits[num % base];
		num /= base;
	} while (num);

	return _puts(&buffer[i]);
}

int print_number_with_flags(long num, format_specifier_t spec)
{
	int is_negative = num < 0;

	char padding_char = ' ';

	int len = 0, count = 0;

	if (spec.flags & FLAG_ZERO && !(spec.flags & FLAG_MINUS))
		padding_char = '0';

	if (spec.precision >= 0)
		spec.flags &= ~FLAG_ZERO; /* Ignore '0' flag when precision is set */

	if (is_negative)
		num = -num;

	len = _numlen(num, 10);

	if (spec.precision > len)
		len = spec.precision;

	if (is_negative || (spec.flags & FLAG_PLUS) || (spec.flags & FLAG_SPACE))
		len++;

	if (spec.width > len && !(spec.flags & FLAG_MINUS))
		count += _putchar_multiple(padding_char, spec.width - len);

	if (is_negative)
		count += _putchar('-');
	else if (spec.flags & FLAG_PLUS)
		count += _putchar('+');
	else if (spec.flags & FLAG_SPACE)
		count += _putchar(' ');

	if (spec.precision > _numlen(num, 10))
		count += _putchar_multiple('0', spec.precision - _numlen(num, 10));

	count += print_number_base(num, 10, 0);

	if (spec.width > len && (spec.flags & FLAG_MINUS))
		count += _putchar_multiple(' ', spec.width - len);

	return (count);
}
