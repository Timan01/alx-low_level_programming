#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the index starting from 0 of the bit youwant to get
 * @n: the integer to retrieve the bit from
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
