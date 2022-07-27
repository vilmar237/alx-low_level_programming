#include "main.h"
/**
 * _puts - is the function that print char by char of a string
 * @str: is the parameter of a function _puts
 * Return: always 0
*/

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

