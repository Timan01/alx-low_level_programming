#include "main.h"

/**
 * set_bit - sets the value of abit to 1 at a given index
 * @index: index of the bit to set to 1, starting from 0
 * @n: pointer to the number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= 1ul << index;

	return (1);
}
