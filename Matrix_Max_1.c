/*
Найти максимальный элемент в верхнем треугольнике матрицы
*/
#include<stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    int matrix[size][size];

    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    int max = matrix[0][0];

    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if((i <= j) && (max < matrix[i][j])) {
                max = matrix[i][j];
            }
        }
    }

    printf("%d", max);
    
}