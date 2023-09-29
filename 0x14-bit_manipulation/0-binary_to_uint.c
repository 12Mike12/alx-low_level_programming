#include "main.h"

/**
 * binary_to_uint - converts a binay to int
 * @b: string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal = 2 * decimal + (b[j] - '0');
	}

	return (decimal);
}

