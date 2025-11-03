#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix substring
 * Return: number of bytes or 0
 */
unsigned int _strspn(char *s, char *accept)
{
char *p = s;/**pointeur courant au debut de chaine s*/
char *a = accept;
unsigned int count = 0;
while (*p != '\0')
{
a = accept;/**remet pointeur courant au debut de accept a chaque tour*/
while (*a != '\0' && *p != *a)
a++;
if (*a == '\0')
break;
count++;
p++;
}
return (count);
}
