#include "main.h"

/**
* parse_length - Parses the length from the format string
* @format: The format string
*
* Return: The length as an integer
*/
int parse_length(const char **format)
{
	int length = 0;

	if (**format == 'h')
	{
		length = 1;
		(*format)++;
		if (**format == 'h')
		{
			length = 2;
			(*format)++;
		}
	}
	else if (**format == 'l')
	{
		length = 3;
		(*format)++;
		if (**format == 'l')
		{
			length = 4;
			(*format)++;
		}
	}

	return (length);
}
