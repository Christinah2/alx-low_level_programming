#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - It returns the sum of all its parameters
 * @n: The parameters passed to the function
 * @...: A variable number to make the calculation of the sum 0
 * If n == 0
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int a, sum = 0;

va_start(ap, n);
for (a = 0; a < n; a++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
