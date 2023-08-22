#include "main.h"

/**
 * _printf - prints strings characters and numbers
 * @format: string to be printed
 * Return: integer
 **/
int _printf(const char *format, ...)
{
	int i = 0, sum = 0, num;
	char *str, ch;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			sum++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			sum++;
			i++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(args, int);
					sum = printchar(ch, sum);
					break;
				case 's':
					str = va_arg(args, char*);
					sum = printstring(str, sum);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, int);
					sum = printinteger(num, sum);
					break;
				default:
					putchar(format[i]);
					break;
			}
			i++;
		}
		i++;
	}
	va_end(args);
	return (sum);
}
