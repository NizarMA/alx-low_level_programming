#include "variadic_functions.h"
#include <stdarg.h>
/**
 * main - returns the sum of all its parameters.
 * @n: the number of paramters passed to the function
 * @...: a variable number of paramters to calculate the sum
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	
	return (sum);
}
