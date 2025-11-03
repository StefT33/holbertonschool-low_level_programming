#include "main.h"
/**
 **_memcpy - copies memory area.
 * @dest: pointer of memory area pasted
 * @src: pointer of memory area copied
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;/**compteur pour parcourir le bloc*/
for (i = 0; i < n; i++)/**parcourt */
dest[i] = src[i];
return (dest);
}
