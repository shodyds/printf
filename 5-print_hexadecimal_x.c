#include "main.h"
/**
 * print_hexadecimal_x - Function print hexadecimal number
 * @list: variadic function arguments
 * Return: count of number
 */
int print_hexadecimal_x(unsigned int n)
{
        int *arr;
        int i, count = 0;
        unsigned int temp = n;

        while (temp / 16 != 0)
        {
                temp = temp / 16;
                count++;
        }
        count++;
        arr = malloc(sizeof(int) * count);
        i = 0;
        while (i < count)
        {
                arr[i] = n % 16;
                n = n / 16;
                i++;
        }
        i = count - 1;
        while (i >= 0)
        {
                if (arr[i] > 9)
                        arr[i] = arr[i] + 39;
                _putchar(arr[i] + 48);
                i--;
        }
        free(arr);
        return(count);
}
