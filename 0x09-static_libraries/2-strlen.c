#include "main.h"
/**
 * _strlen - is the function that return size_of string
 * @s: is the parameter of function
 *
 * Return: string length
 *
*/
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}

