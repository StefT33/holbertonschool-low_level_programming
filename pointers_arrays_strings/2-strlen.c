#include "main.h"
#include <string.h>
/**
* _strlen - returns the length of a string.
* @s: string
* Return: -1 or 0 or len
*/
int _strlen(char *s)
{
int len = 0;
if (s == NULL)
return (-1);
else if (*s == '\0')
return (0);
while (*s != '\0')
{
len++;
s++;}
return (len);
}
