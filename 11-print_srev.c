#include "main.h"

/**
 * print_revs - function prints a str in reverse
 * @list: arguments
 *
 * Return: the string
 */
int print_revs(va_list list)
{

	char *s = va_arg(list, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
