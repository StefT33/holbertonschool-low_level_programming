#include "main.h"
#include <stddef.h>
/**
 **_strstr - locates a substring.
 * @needle: substring
 * @haystack: string into search
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *h_ptr = h; /**pointeur temporaire de h*/
char *n = needle;

while (*h != '\0')
{
h_ptr = h;
n = needle;
while (*n != '\0' && *h_ptr == *n)
{
h_ptr++;
n++;
}
if (*n == '\0')
return (h);
h++;
}
return (NULL);
}
