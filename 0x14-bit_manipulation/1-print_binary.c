#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer to be printed
 *
 * Return: printed number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int i;

	while ((mask << 1) <= n)
		mask <<= 1;
	while (mask > 0)
	{
		i - (n & mask) ? 1 : 0;
		_putchar(i + '0');
		mask >>= 1;
	}
}
