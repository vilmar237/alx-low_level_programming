#include "main.h"
/**
 * _strlen is the function that return size_of string
 * @s is the parameter of function
 *
 * return : string lenght
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

