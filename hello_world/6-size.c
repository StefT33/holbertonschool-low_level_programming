#include <stdio.h>
/**
 * main - s'affiche en sortie
 * Return: 0
 */
int main(void)
{
printf("\n %d octets pour variable de type char ",sizeof(char));
printf("\n %d octets pour variable de type short int ",sizeof(short int));
printf("\n %d octets pour variable de type long int ",sizeof(long int));
printf("\n %d octets pour variable de type long long int ",sizeof(long long int));
printf("\n %d octets pour variable de type float ",sizeof(float));
return (0);
}
