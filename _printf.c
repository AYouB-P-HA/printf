#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int j;
    va_start(args, format);

	j = 0;
    while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			switch (format[j])
			{
			case 'd':
			case 'i':
				{
					int x = va_arg(args, int);
					printf("%d", x);
					break;
				}
			case 'c':
				{
					int x = va_arg(args, int);
					printf("%c", x);
					break;
				}
			case 's':
				{
					char *x = va_arg(args, char *);
					printf("%s", x);
					break;
				}
			case '%':
				putchar('%');
				break;
			default:
				putchar(format[j]);
				break;
			}
		}
		else
		{
			putchar(format[j]);
		}
		j++;
	}

	va_end(args);
	return (j);
}
