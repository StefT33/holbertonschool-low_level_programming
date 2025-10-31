#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 * Return: void
 */
char *cap_string(char *s)
{
int i = 0;
int j;
int deb = 0;
char sep[] = " \t\n,;.!?\"(){}";

while (s[i] != '\0')
{
int deb = 0;
if (i == 0)
deb = 1;
else
{
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i - 1] == sep[j])
{
deb = 1;
break;
}
}
}

if (deb && s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
return (s);
}
