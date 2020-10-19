#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Введите количество членов последовательности n:\n");
    int n;
    printf("\tn= ");
    scanf("%d", &n);
    printf("Введите значения членов последовательности:\n");
    int* a = (int*)malloc(n * sizeof(int)); // массив
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d]= ", i);
        scanf("%lf", &a[i]);
        
    } 
    int choise = 0;
    for (size_t i = 0; i < n-1; i++)
    {
        int firstNum = a[i];
        int secondNum = a[i+1];
        if ((secondNum%2 == 0) && (firstNum%2 !=0))
        {
            choise += 1;
        }
    }
    if (choise == 0)
    {
        for (int i = n; i >=0; i--)
        {
            if (a[i]<0)
            {
                printf(a[i]);
            }
            
        }
        
    }
    else
    {
        for (int i = n; i >=0; i--)
        {
            if (a[i]>0)
            {
                printf(a[i]);
            }
        }
    }
    getchar();
}