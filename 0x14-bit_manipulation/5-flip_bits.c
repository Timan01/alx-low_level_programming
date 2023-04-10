#include "main.h"

/*
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the 1st number
 * @m: the 2nd number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long m)
{
	unsigned long int differnce, result;
	unsigned int x, y;

	x = 0;
	result = 1;
	differnce = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (result == (differnce & result))
			x++;
		result <<= 1;
	}

	return (x);
}
