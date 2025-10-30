#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (start);
}
