#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_char(int c);
int print_int(int num);
unsigned int print_hex(unsigned int num);
int print_len_lower(long n, int base);
int print_len_upper(long n, int base);
int print_string(char *str);
int print_any(char find, va_list arglist);
int _printf(const char *format, ...)

#endif
