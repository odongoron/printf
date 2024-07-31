#include "main.h"

/**
* parse_width - Parses the width from the format string
* @format: The format string
* @args: The argument list
*
* Return: The width as an integer
*/
int parse_width(const char **format, va_list args)
{
	int width = 0;

	if (**format == '*')
	{
		width = va_arg(args, int);
		if (width < 0)
		{
			width = -width;
		}
		(*format)++;
	}
	else
	{
		while (**format >= '0' && **format <= '9')
		{
			width = width * 10 + (**format - '0');
			(*format)++;
		}
	}

	return (width);
}
