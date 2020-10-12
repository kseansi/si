#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double y(double x)
{
    if (x<=-1)
    {
        return -1./(x*x);
    }
    else if (x>-1 && x<=2)
    {
        return x*x;
    }
    else
    {
        return 4;
    }  
}

int main()
{
    double a;
    printf("Введите действующее значение х: \n");
    scanf("%lf", &a);
    double function = y(a);
    printf("f(%lf) = %lf\n", a, function);
    getchar();
}