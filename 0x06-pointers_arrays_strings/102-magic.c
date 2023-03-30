#include <stdio.h>
/**
 * This file contains a program that demonstrates how to access
 * elements of an array using pointer arithmetic.
 *
 *
 * Entry point of the program.
 *
 * @return 0 if the program executed successfully, non-zero otherwise.
 */

int main(void)
{
int a[] = {3, 7, 98, 6, 2};
int *p = &a[0];
printf("a[2] = %d\n", *(p + 2));
return (0);
}
