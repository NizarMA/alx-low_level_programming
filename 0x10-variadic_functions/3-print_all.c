#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * main - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...);
{
	int i = 0;
	char *abc, *def = "";


	va_list list;


	va_start(list, format);


	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", def, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", def, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", def, va_arg(list, double));
					break;
				case 's':
					abc = va_arg(list, char *);
					if (!abc)
						abc = "(nil)";
					printf("%s%s", def, abc);
					break;
				default:
					i++;
					continue;
			}
			def = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
