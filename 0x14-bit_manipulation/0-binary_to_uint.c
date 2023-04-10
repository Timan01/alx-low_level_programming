#include "main.h"

/*
 * binary_to_uint - function that converts a binary number to
 * an unsigned int
 * @b: pointing to a string od 0 and 1 chars
 *
 * Return: the converted number, or 0
 *
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		return (0);
	}
	if (b[i] == 'i')
	{
		result += pow(2, len - i  - 1);
	}
}
