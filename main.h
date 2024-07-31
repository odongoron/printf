#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Flags for formatting */
#define FLAG_MINUS (1 << 0)
#define FLAG_PLUS (1 << 1)
#define FLAG_SPACE (1 << 2)
#define FLAG_HASH (1 << 3)
#define FLAG_ZERO (1 << 4)

/**
* struct format_specifier - Holds format specifier details
* @flags: Formatting flags
* @width: Minimum width of the output
* @precision: Precision for floating-point numbers
* @length: Length modifier for the format specifier
* @specifier: Conversion specifier (e.g., 'd', 's')
*/
typedef struct format_specifier
{
	int flags;

	int width;

	int precision;

	int length;

	char specifier;

} format_specifier_t;

/* Function prototypes */
int _printf(const char *format, ...);

format_specifier_t parse_format(const char **format, va_list args);

int parse_flags(const char **format);

int parse_width(const char **format, va_list args);

int parse_precision(const char **format, va_list args);

int parse_length(const char **format);

char parse_specifier(const char **format);

int _putchar(char c);

int _puts(char *str);

int _putchar_multiple(char c, int count);

int _putnstr(char *str, int n);

int _strlen(char *str);

int print_number_base(unsigned long num, int base, int uppercase);

int print_number_with_flags(long num, format_specifier_t spec);

int print_char(va_list args, format_specifier_t spec);
int print_string(va_list args, format_specifier_t spec);
int print_int(va_list args, format_specifier_t spec);
int print_unsigned_int(va_list args, format_specifier_t spec);
int print_octal(va_list args, format_specifier_t spec);
int print_hex(va_list args, format_specifier_t spec, int uppercase);

int print_binary(va_list args, format_specifier_t spec);
int print_pointer(va_list args, format_specifier_t spec);
int print_special_string(va_list args, format_specifier_t spec);
int print_reversed(va_list args, format_specifier_t spec);
int print_rot13(va_list args, format_specifier_t spec);

#endif /* MAIN_H */
