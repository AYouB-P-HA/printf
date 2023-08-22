#include <main.h>

/**
  * printstring - print strings
  * @str: pointer to string
  * @sum: integer
  * Return: integer
  **/

int printstring(char *str, int sum)
{
	if (str == NULL)
		str = "(null)";
	for (; *str; str++)
	{
		putchar(*str);
		sum++;
	}
	return (sum);
}
