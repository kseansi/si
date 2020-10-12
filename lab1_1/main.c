#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * Функция вычисляет значения параметра a.
 */
double calculate_a(double x, double y, double z)
{
    double first_brackets = x-sqrt(abs(y));
    double second_brackets = x+(y/(z+(pow(x, 6)/4)));
    return sqrt(log(abs(first_brackets)*second_brackets));
}


/**
 * Функция вычисляет значения параметра b.
 */
double calculate_b(double x)
{
    return -x + (pow(x, 2)/24) - (pow(x, 5)/600);
}


int main()
{
    printf("Введите значения переменных x, y, z:\n");
    double x, y, z;
    printf("\tx= ");
    scanf("%lf", &x);
    printf("\ty= ");
    scanf("%lf", &y);
    printf("\tz= ");
    scanf("%lf", &z);
    double a = calculate_a(x, y, z);
    printf("a= %lf\n", a);
    double b = calculate_b(x);
    printf("b= %lf\n", b);
    getchar();
}