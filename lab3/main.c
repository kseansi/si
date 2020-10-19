#include <locale.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


/*В текстовом файле INPUT.TXT записаны целые числа через пробел, возможно, в
несколько строк. Сформировать список (массив) этих чисел. Сформировать на
основе данного списка два дополнительных, содержащих соответственно четные
и нечетные элементы исходного списка. Полученные списки (массивы) занести
в текстовые файлы ODD.TXT и EVEN.TXT.*/

int main()
{
    FILE* file = fopen("INPUT.txt", "r");
    int n = 10; // исходное количество элементов в массиве,
    // в который записываются символы из файла
    int* array = (int*)malloc(n * sizeof(int)); // массив, в который все записывается
    int i = 0; // количество прочитанных из файла символов
    do
    {
        fscanf(file, "%d",&array[i]);
        i++;
        if (i > n)
        {
            // Если количество прочитанных символов больше размера
            // массива, удваиваем размер
            int* arr_new = (int*)malloc(2 * n * sizeof(int));
            for (int j = 0; j < n; j++)
            {
                // В новый удвоенный массив записываем данные из
                // старого массива
                arr_new[j] = array[j];
            }
            free(array); // удаляем старый массив
            array = arr_new;
            n *= 2;
        }
    } while ((fscanf(file, "%d",&array[i])!=EOF));
    fclose(file); 
    
	FILE* ODD = fopen("ODD.txt","a");
	FILE* EVEN = fopen("EVEN.txt","a");
    for (int j = 0; j < i; j++)
    {
        if (array[j] % 2 == 0)
        {
            fprintf(ODD,"%d",array[j]);
			fprintf(ODD,"\n");
        }
        else
        {
            fprintf(EVEN,"%d",array[j]);
			fprintf(EVEN,"\n");
        }
    }
    fclose(ODD);
    fclose(EVEN);  
    free(array);
    getchar();
}