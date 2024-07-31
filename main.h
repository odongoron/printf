#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_pointer(va_list args);
int print_binary(va_list args);
int print_special_string(va_list args);
int print_reversed(va_list args);
int print_rot13(va_list args);

typedef int (*print_func)(va_list);

print_func get_print_func(char format);
int process_format(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
