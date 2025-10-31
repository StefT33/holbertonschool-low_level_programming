#include "main.h"
/**
*_strncpy - copies a string.
* @dest: final string
* @src: string to modify
* @n: nombre limite a copier
* Return: a pointer to the concatenated string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;/** compteur */

while (src[i] != '\0' && i < n)/** copie src dans dest tant que n pas atteint*/
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';/** rajoute un null a la fin de dest tant que n pas atteint */
i++;
}

return (dest);
}
