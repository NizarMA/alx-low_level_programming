#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bin = sizeof(unsigned long int) * 8 - 1;
	int starting_zero = 1;

	while
		(bin >= 0)
		{
			if
				((n >> bin) & 1)
				{
					putchar('1');
					starting_zero = 0;
				}
			else
			{
				if
					(!starting_zero)
					{
						putchar('0');
					}
			}
			bin--;
		}
	if
		(starting_zero)
		{
			putchar('0');
		}
}
