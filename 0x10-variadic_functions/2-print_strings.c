#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * main - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable number of strings to be printed
 *  Description: If separator is NULL, it is not printed.
 *  If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
	va_list strings;
	chat *abc;
	unsigned int b;

	va_start(strings, n);
	for (b = 0; b < n; b++)
	{
		abc = va_arg(strings, char*);
		if (abc == NULL)
			printf("(nil)");
		else
			printf("%s", abc);
		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
