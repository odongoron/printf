#include "main.h"

/**
* parse_precision - Parses the precision from the format string
* @format: The format string
* @args: The argument list
*
* Return: The precision as an integer
*/
int parse_precision(const char **format, va_list args)
{
	int precision = -1;

	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			precision = va_arg(args, int);
			(*format)++;
		}
		else
		{
			precision = 0;
			while (**format >= '0' && **format <= '9')
			{
				precision = precision * 10 + (**format - '0');
				(*format)++;
			}
		}
	}

	return (precision);
}
