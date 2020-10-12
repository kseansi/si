#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//Дано натуральное число n. Найти сумму его цифр.
int main()
{
    int n;
    int sum = 0;
    int queue;
    printf("n= ");
    scanf("%d", &n);
    while (n!=0)
    {
        queue = n % 10;
        n = (n-queue)/10;
        sum = sum+queue;
    }
    printf(sum);
    getchar();   
}