#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: 0
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
{ sign = sign * -1; }
else if (s[i] == '+')
{ ; }  /** ';'tout seul = ne rien faire */
i++; }

while (s[i] >= '0' && s[i] <= '9')
{ result = result * 10 + (s[i] - '0');
i++; }

result = result *sign;

return (result);
}
