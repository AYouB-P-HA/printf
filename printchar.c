#include "main.h"

/**
  * printchar - prints characters
  * @ch: character
  * @sum: integer
  * Return: integer
  **/

int printchar(char ch, int sum)
{
	if (ch != '\0')
		putchar(ch);
	else
		putchar(' ');
	sum++;
	return (sum);
}
