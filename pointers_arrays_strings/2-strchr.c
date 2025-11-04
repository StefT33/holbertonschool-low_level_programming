#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
char *p = s;/**pointeur courant qui pointe vers debut de s*/
while (*p != '\0')
{
if (*p == c)
return (p);
p++;
}
if (c == '\0')
return (p);
return (NULL);
}
