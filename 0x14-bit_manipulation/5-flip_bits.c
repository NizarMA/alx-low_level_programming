#include "main.h"
/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: pointer of the first number
 * @m: seconde number
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fli = n ^ m;
	unsigned int num = 0;

	while
		(fli != 0)
		{
			num += fli & 1;
			fli >>= 1;
		}
	return (num);
}
