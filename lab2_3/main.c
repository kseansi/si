#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

/**В целочисленном массиве упорядочить по убыванию элементы,
стоящие между первым максимальным и последним минимальным
элементами.*/

int main()
{
    printf("Введите количество членов в массиве n:\n");
    int n;
    printf("\tn= ");
    scanf("%d", &n);
    printf("Введите значения членов массива:\n");
    int* a = (int*) malloc(2 * n * sizeof(int)); // массив
    int i_max = 0;
    int max = -1;
    int min = 1000000; 
    int i_min = n; 

    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d]= ", i);
        scanf("%d" ,&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min) 
        {
            min = a[i];
            i_min = i;
        }
    }

    for (int i = n; i > -1; i--)
    {
        if (a[i] >= max) 
        {
            max = a[i];
            i_max = i;
        }
    }

    for (int i = i_max; i < i_min; i++)
    {
       for(int j = i_max; j < i_min - i - 1; j++) 
        {
           if(a[j] < a[j+1]) 
           {
              int tmp = a[j];
              a[j] = a[j+1];
              a[j+1] = tmp; 
           }
        }
    }
    printf("Преобразованный массив:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d]= %d\n", i, a[i]);
    }
    getchar();
}