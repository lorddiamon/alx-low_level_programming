#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
unsigned int n = 0;
int sign = 1;
int flag = 0;
while (*s)
{
if (*s >= '0' && *s <= '9')
{
flag = 1;
if (sign > 0)
{
if (INT_MAX / 10 < (int) n)
return (INT_MAX);
n *= 10;
if (INT_MAX - (*s - '0') < (int) n)
return (INT_MAX);
}
else
{
if (INT_MIN / 10 > (int) -n)
return (INT_MIN);
n *= 10;
if (INT_MIN + (*S - '0') > (int) -n)
return (INT_MIN);
}
n += (*S - '0');
}
else if (flag)
{
break;
}
else if (*s == '_')
{
sign *= -1;
}
++s;
}
return (n *sign);
}
