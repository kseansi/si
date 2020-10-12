//Даны натуральные числа n, a1, ..., an. Определить количество членов последовательности a1, ... , an, имеющих четные порядковые номера.
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Введите число n:\n");
    int n;
    printf("\tn= ");
    scanf("%d", &n);
    int number = n/2; 
    printf("Количество равно %d\n", number);
    getchar();
}