/**
 * Дано действительное число a. Найти среди чисел 1, 1+1/2, 
 * 1+1/2+1/3,... первое, большее a.
 */
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Введите число a:\n");
    double a;
    double n = 2;
    double h = 1;
    printf("\ta= ");
    scanf("%lf", &a);
    while (a >= h)
    {
        h += 1/n;
        n++;
    }
    printf("Число равно %lf\n", h);    
    getchar();
}