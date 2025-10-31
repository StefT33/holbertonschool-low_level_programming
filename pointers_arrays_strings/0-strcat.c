#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to add
 * @src: string to modify
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;/** compteur de dest */
int j = 0;/** compteur de src */

while (dest[i] != '\0')/** parcourt dest juste avant null */
i++;

while (src[j] != '\0')/** parcourt src juste avant  null */
{
dest[i] = src[j];/** copie src dans dest */
i++;
j++;
}
dest[i] = '\0';/** rajoute un null a la fin de dest */

return (dest);
}
