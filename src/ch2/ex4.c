#include <stdio.h>

/*
Write a program that subtracts the value 15 from 87 and displays the result, 
together with an appropriate message, at the terminal.
*/

int main(void)
{
    int v1, v2, res;
    v1 = 87;
    v2 = 15;
    res = v1 - v2;
    printf("%i - %i = %i\n", v1, v2, res);
}