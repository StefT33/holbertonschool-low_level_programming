#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 *
 * Return: void
 */
char *cap_string(char *s)
{
  int i = 0;

  while (s[i] != '\0')
    i++;
  if (
