#include "main.h"

/**
* parse_specifier - Parses the specifier from the format string
* @format: The format string
*
* Return: The specifier as a char
*/
char parse_specifier(const char **format)
{
	char spec = **format;

	(*format)++;
	return (spec);
}
