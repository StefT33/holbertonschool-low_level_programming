#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: string into search
 * @accept: characters to search in string
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
char *p = s;
char *a;
while (*p != '\0')/** parcourt s jusqu'a la fin*/
{
a = accept;
while (*a != '\0' && *p != *a)
a++;
if (*a != '\0')
return (p);
p++;
}
return (NULL);
}
