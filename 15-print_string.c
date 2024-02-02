#include "main.h"
/**
 * print_str - print a string.
 * @list: argument.
 * Return: the length of the string.
 */

int print_str(va_list list)
{
	char *s;
	int i, len;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
