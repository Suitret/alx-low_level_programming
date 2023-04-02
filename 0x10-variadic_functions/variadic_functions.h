#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#include <stdarg.h>

/**
 * struct ptr_fn - struct for right printing function
 * @type: char
 * @fn: pointer on function
 * Description: Longer description
 */

typedef struct ptr_fn
{
	char type;
	void (*fn)(va_list);
} print_fn_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);

#endif /* _FUNCTIONS_ */
