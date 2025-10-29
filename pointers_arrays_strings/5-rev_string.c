#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: beginning of string
 */
void rev_string(char *s)
{
char *ptr = s;
char *start = s;
while (*ptr != '\0')
ptr++;
ptr--;
while (start < ptr)
{char tmp = *start;
*start = *ptr;
*ptr = tmp;
start++;
ptr--; }
}
