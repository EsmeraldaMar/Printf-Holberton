#include "main.h"

/**
 * printf_char - Prints a char
 * @box: box to get the item
 *
 * Return: 1
 */
int printf_char(va_list box)
{
        _putchar(va_arg(box, int));
        return (1);
}

/**
 * printf_string - Prints a string
 * @box: box to get the item
 *
 * Return: length of the string
 */
int printf_string(va_list box)
{
        int i = 0;
        char *str;

        str = va_arg(box, char*);
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
        return (i);
}
