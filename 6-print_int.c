#include "main.h"
/**
 * print_int - print integer
 * @list: argument
 * Return: count of integer
 */
int print_int(va_list list)
{
	int n = var_arg(list, int);
	int num, last = n % 10, i = 1, exp = 1, digits;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		if (last < 0)

	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digits = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
