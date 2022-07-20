#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination of string
 * @src: source of string 
 *
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest != '\0')
{
dest++;
}
while(*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest ='\0';
return (s);
}

