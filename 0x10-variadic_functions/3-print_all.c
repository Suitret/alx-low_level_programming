#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @valist: va_list containing the char to print
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an integer
 * @valist: va_list containing the integer to print
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: va_list containing the float to print
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: va_list containing the string to print
 */
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}

	va_end(args);

	printf("\n");
}
