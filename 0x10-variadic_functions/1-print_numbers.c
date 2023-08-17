#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - It prints numbers, followed by a new line
 * @n: is the number of integers passed to the function
 * @separator: It is the string to be printed between numbers
 * @...: The variable number of printed numbers
 * if the separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int index;

va_start(numbers, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(numbers, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
