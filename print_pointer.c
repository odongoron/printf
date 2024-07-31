#include "main.h"

/**
 * print_pointer - Prints the address of a void pointer in hexadecimal format
 * @args: A va_list containing the void pointer to be printed
 * @spec: A format specifier struct containing flags, width
 *
 * Return: The number of characters printed
 */
int print_pointer(va_list args, format_specifier_t spec)
{
	void *ptr = va_arg(args, void *);

	unsigned long num = (unsigned long)ptr;

	(void)spec;
	if (ptr == NULL)
		return (_puts("(nil)"));

	return (_puts("0x") + print_number_base(num, 16, 0));
}
