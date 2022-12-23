#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: int value to be checked
 *
 * Return: the last digit of i.
 */

int print_last_digit(int i)
{
	int last = _abs(i % 10);
	_putchar(last + '0');
	return (last);
}
