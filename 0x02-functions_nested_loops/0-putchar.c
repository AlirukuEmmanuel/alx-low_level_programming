#include "stdio.h"

/**
 * main- prints _putchar as a massage.
 *
 * Return: Always 0 (seccess)
 */
int main(void)
{
	int str[] = {72, 111, 108, 114, 116, 111, 106};	
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz, count++)
	{
		_putchar(str[count]);
	}
	_putchar("\n");
	return (0);
