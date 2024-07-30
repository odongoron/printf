#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/* Standard specifier functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args, char format);
int print_pointer(va_list args);
int print_hex_digit(int digit);

/* Custom specifier functions */
int print_binary(va_list args);
int print_special_string(va_list args);
int print_reversed(va_list args);
int print_rot13(va_list args);

/* Helper functions */
int _putchar(char c);
int _puts(char *str);
void print_number(int n);
void print_unsigned_number(unsigned int n);
int print_hex_helper(unsigned int num, char format);
int get_digits(int n);
int _strlen(char *s);

#endif
