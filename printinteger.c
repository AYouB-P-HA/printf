#include "main.h"

/**
 * printinteger - prints intgeres
 * @num: integer to be printed
 * @sum: integer
 * Return: integr
 **/
int printinteger(int num, int sum)
{
	int i;
	char str[20];

	if (num == '\0')
	{
		putchar('0');
		sum++;
	}
	else
	{
		sprintf(str, "%d", num);
		for (i = 0; str[i] != '\0'; i++)
		{
			putchar(str[i]);
			sum++;
		}
	}
	return (sum);
}
