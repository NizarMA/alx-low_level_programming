#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * main - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list num;
	unsigned int b:

	va_start(num, n);

	for (b = 0; b < n; b++)
	{
			printf("%d", va_arg(num, int));


			if (b != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(num);
	}

