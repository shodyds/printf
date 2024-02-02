#include "main.h"
/**
 * print_char - Function print a character
 * @list: arguments
 * Return: 1
 */
int print_char(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
}
