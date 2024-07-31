#include "main.h"

/**
* parse_flags - Parses the flags from the format string
* @format: The format string
*
* Return: The flags as an integer
*/
int parse_flags(const char **format)
{
	int flags = 0;

	while (**format)
	{
		if (**format == '-')
			flags |= FLAG_MINUS;
		else if (**format == '+')
			flags |= FLAG_PLUS;
		else if (**format == ' ')
			flags |= FLAG_SPACE;
		else if (**format == '#')
			flags |= FLAG_HASH;
		else if (**format == '0')
			flags |= FLAG_ZERO;
		else
			break;
		(*format)++;
	}

	return (flags);
}
