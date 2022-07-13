#include "main.h"
/*
 *swap_int :swaps values of two intergers
 *@a: first interger to swap
 * @b: second interger to swap
 *
*/
void swap_int(int *a,int *b)
{int c ;
c = *a;
*a = *b;
*b = c;
}
