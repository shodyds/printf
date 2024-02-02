#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - struct for printf format specificer
 * @ps: pointer to the format specifier
 * @function: function for the conversion specifier
 */
struct format
{
	char *ps;
	int (*function)();
};

/**
 * format_spec - format typedef
 */
typedef struct format format_spec;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list list);
int print_unsigned(va_list list);
int print_hexadecimal_x(unsigned long int num);
int _strlenc(const char *s);
int print_Hexadecimal_x(unsigned int num);
int print_ex_string(va_list list);
int print_Hexadecimal(va_list list);
int print_hexadecimal(va_list list);
int print_oct(va_list list);
int print_binary(va_list list);
int print_revs(va_list list);
int print_rot13(va_list list);
int print_int(va_list list);
int print_dec(va_list list);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_char(va_list list);
int print_str(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
