#include <stdio.h>
/**
*main - prints the numbers from 1 to 100, followed by a new line
*multiples of three print Fizz instead of the number
*multiples of five print Buzz
*numbers which are multiples of both three and five print FizzBuzz
* Return: 0
*/
int main(void)
{
int n = 1;
for (; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
printf("FizzBuzz");
else if (n % 3 == 0)
printf("Fizz");
else if (n % 5 == 0)
printf("Buzz");
else
printf("%d", n);
if (n != 100)
printf(" ");
}
printf("\n");
return (0);
}
