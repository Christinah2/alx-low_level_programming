#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - It prints anything
 * @format: The list of argument types that are passed to the function
 * If the string is NULL, print (nil) instead
 */

void print_all(const char * const format, ...)
{
char *str, *separator = "";
int a = 0;

va_list list;
va_start(list, format);
if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", separator, va_arg(list, int));
break;
case 'i':
printf("%s%i", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
a++;
continue;
}
separator = ", ";
a++;
}
}
printf("\n");
va_end(list);
}
