#include "main.h"
#include <stdio.h>

/**
 * *leet - encodes a string into 1337
 * @s: string to convert
 * Return: Always 0.
 */
char *leet(char *s)
{int i = 0;
int j = 0;
char letter[] = "aAeEoOtTlL";
char digit[] = "4433007711";

while (s[i] != '\0')
{ j = 0;
while (j < 10)
{
if (s[i] == letter[j])
s[i] = digit[j];
j++; }
i++; }
return (s); }
