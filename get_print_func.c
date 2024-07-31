#include "main.h"

/**
* get_print_func - Retrieves the function pointer based on format specifier
* @format: The format specifier character
*
* Return: Function pointer for the format specifier
*/
print_func get_print_func(char format)
{
	switch (format)
	{
		case 'c':
			return (print_char);
		case 's':
			return (print_string);
		case '%':
			return (print_percent);
		case 'd':
		case 'i':
			return (print_int);
		case 'u':
			return (print_unsigned_int);
		case 'o':
			return (print_octal);
		case 'x':
			return (print_hex);
		case 'X':
			return (print_HEX);
		case 'p':
			return (print_pointer);
		case 'b':
			return (print_binary);
		case 'S':
			return (print_special_string);
		case 'r':
			return (print_reversed);
		case 'R':
			return (print_rot13);
		default:
			return (NULL);
	}
}
