/** Задан массив действительных чисел. Переставить члены
последовательности так, чтобы сначала расположились все ее
неотрицательные члены, а потом – все отрицательные. Порядок следования,
как среди неотрицательных членов, так и среди отрицательных должен быть
сохранен прежним.*/
#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Введите количество членов в массиве n:\n");
    int n;
    printf("\tn= ");
    scanf("%d", &n);
    printf("Введите значения членов массива:\n");
    double* firstArray = (double*)malloc(n * sizeof(double));
    double* finalArray = (double*)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d]= ", i);
        scanf("%lf", &firstArray[i]);
    }
    int counterNegative = 0;
    for (int i = 0; i < n; i++)
    {
        if(firstArray[i]<0)
        {
            finalArray[i] = firstArray[i];
            firstArray[i] = -1;
            counterNegative +=1;
        }
    }
    for (int i = counterNegative; i < n; i++)
    {
        if(firstArray[i]!=-1)
        {
            finalArray[i] = firstArray[i];
        }
    }
    printf("Измененный массив равен:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d]= %lf\n", i, finalArray[i]);
    }
    getchar();
}
