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
	va_list valist;
	unsigned int i = 0, j = 0;
	char *separator = "";

    /* list of function pointers for each type */
	print_fn_t print_fn[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (print_fn[j].type != 0)
		{
			if (format[i] == print_fn[j].type)
			{
				printf("%s", separator);
				print_fn[j].fn(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(valist);

	printf("\n");
}
