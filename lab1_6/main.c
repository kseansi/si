#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Функция вычисляет произведение.
 */
double calculate_product(int n, double x)
{
    double k = 1;
    double product = 1.0; 
    for (int i = 1; i <= n; i++)
    {
        k *= i;
        product *= (1+sin(i*x)/k);
    }
    return product;
}

int main()
{
    printf("Введите число n:\n");
    int n;
    printf("\tn= ");
    scanf("%d", &n);
    printf("Введите число x:\n");
    double x;
    printf("\tx= ");
    scanf("%lf", &x);
    printf("Произведение равно %lf\n", calculate_product(n, x));
    getchar();
}