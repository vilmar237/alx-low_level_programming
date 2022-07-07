#include <stdio.h>

/**
 *   * main - Prints the numbers from 00 to 99
 *     *
 *       * Return: Always (Success)
*/
int main(void)
{
int c, i;

c = i = '0';
for (c = '0'; c < '9'; c++)
{
for (i = '1'; i <= '9'; i++)
{		
if(c !=i)
{
putchar(c);
putchar(i);
putchar(',');
putchar(' ');
}
}
}
return (0);
}

