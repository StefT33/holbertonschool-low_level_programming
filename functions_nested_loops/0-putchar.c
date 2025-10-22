#include <unistd.h>
/**
* main - entry point
* Descrption: print _putchar, followed by a new line
*
* Return: 0;
*/
int main(void)
{
const char *text = "_putchar\n";
write(1, text, 9);
return (0);
}
