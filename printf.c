#include "main.h"

/**
 * _printf - print stuff
 *
 * @format: string to receive
 * @...: list of items
 *
 * Return: length
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int found = 0;
	int length = 0;
	va_list box;
	print_t printf_struct[] = {
		{"c", printf_char},
		{"s", printf_string},
		{NULL, NULL}
	};

	va_start(box, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			while (printf_struct[j].op != NULL)
			{
				if (*printf_struct[j].op == format[i + 1])
				{
					length += printf_struct[j].f(box);
					found = 1;
				}
				j++;
			}
			j = 0;
			if (format[i + 1] == '%')
			{
				length += _putchar('%');
				i++;
			}
		}
		else if (found == 0)
		{
			length += _putchar(format[i]);
		}
		else
			found = 0;
		i++;
	}
	return (length);
}

