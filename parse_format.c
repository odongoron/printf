#include "main.h"

/**
 * parse_format - Parses the format string to extract format specifiers
 * @format: The format string
 * @args: The va_list of arguments
 *
 * Return: A format_specifier_t structure with parsed details
 */
format_specifier_t parse_format(const char **format, va_list args)
{
	format_specifier_t spec = {0};

    /* Initialize the spec structure */
	spec.flags = parse_flags(format);
	spec.width = parse_width(format, args);
	spec.precision = parse_precision(format, args);
	spec.length = parse_length(format);
	spec.specifier = parse_specifier(format);

	return (spec);
}
