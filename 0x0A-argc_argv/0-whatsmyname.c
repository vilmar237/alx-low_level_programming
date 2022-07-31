#include "main.h"
/**
 *  * main - program prints its own name.
 *   * @argc: argument count
 *    * @argv: argument vectors
 *     * Return: 0 on success
*/


int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);

