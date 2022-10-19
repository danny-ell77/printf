#include "main.h"
/**
 * _puts - this function return the length of a string
 *
 * @str: value
 * Return: the number of characters printed to std out
 */
int _puts(char *str)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = str[i];
		if (n != '\0')
		{
			_putchar(n);
		}
	}
	return (i);
}
