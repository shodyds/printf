#include "main.h"
/**
 * print_ex_string - print exclusuives string.
 * @list: parameter.
 * Return: integer.
 */

int print_ex_string(va_list list)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_Hexadecimal_x(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
