#include "main.h"

/**
 * flip_bits - returns the number of bits you would flip from one number to
 * another number
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_flips = 0;

	while (xor_result)
	{
		if (xor_result & 1)
			num_flips++;
		xor_result >>= 1;
	}
	return (num_flips);
}
