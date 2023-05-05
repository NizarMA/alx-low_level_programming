#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int size = sizeof(unsigned long int) * 8;
	int starting_zero = 1;

	for
		(i = size - 1;
		 i >= 0;
		 i--)
		{
			if
				((n >> i) & 1)
				{
					starting_zero = 0;
					break;
				}
		}
	for
		(;
		 i >= 0;
		 i--)
		{
			if ((n >> i) & 1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	if (starting_zero)
	{
		for
			(i = 1;
			 i < size;
			 i++)
			{
				printf("0");
			}
	}
}
