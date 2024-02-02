#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	format_spec p[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hexadecimal}, {"%X", print_Hexadecimal},
		{"%S", print_ex_string}, {"%p", print_pointer}
	};

	va_list list;
	int i = 0, j, length = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ps[0] == format[i] && p[j].ps[1] == format[i + 1])
			{
				length += p[j].function(list);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(list);
	return (length);
}
