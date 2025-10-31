#include "main.h"
/**
*_strncat - concatenates two strings.
* @dest: final string
* @src: string to modify
* @n: limite de bytes disponibles
* Return: a pointer to the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;/** compteur de dest */
int j = 0;/** compteur de src */

while (dest[i] != '\0')/** parcourt dest juste avant null */
i++;

while (j < n && src[j] != '\0')/** condition posee pour n bytes */
{
dest[i] = src[j];/** copie src dans dest */
i++;
j++;
}
dest[i] = '\0';/** rajoute un null a la fin de dest */

return (dest);
}
