#include "main.h"

/**
 * print_pointer - prints pointer.
 * @list: arguments.
 * Return: count.
 */
int print_pointer(va_list list)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hexadecimal_x(x);
	return (y + 2);
}
