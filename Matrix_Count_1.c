/*
Подсчитать количество чётных элементов на главной диагонали
*/
#include<stdio.h>

int main(){
    int N = 3;

    int matrix[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 4 + i + j;
        }        
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if ((matrix[i][i] % 2 == 0))
        {
            count++;
        }
    }

    printf("%d", count);
    
}