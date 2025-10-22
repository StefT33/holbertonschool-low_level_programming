#include <unistd.h>
#include <main.h>
/**
* main - entry point
* Descrption: print alphabet, followed by a new line
*
* Return: 0;
*/
int main(void)
{
const char *text = "abcdefghijklmnopqrstuvwxyz\n";
write(1, text, 27);
return (0);
}
