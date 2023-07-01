#include "printf.h"

void printf_char(va_list box)
{
	putchar(va_arg(box, int));
}

void printf_string(va_list box)
{
	int i = 0;
	char *str;

	str = va_arg(box, char*);
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

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
					printf_struct[j].f(box);
					found = 1;
				}
				j++;
			}
			j = 0;
			if (format[i + 1] == '%')
			{
				putchar('%');
				length += 1;
				i++;
			}
		}
		else if (found == 0)
		{
			putchar(format[i]);
			length += 1;
		}
		else
			found = 0;
		i++;
	}
	return (length);
}

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	_printf("Character:[%c]\n", 'H');
	return (0);
}
