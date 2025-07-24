/*
Вычислить среднее арифметическое элементов на границе матрицы
*/
#include<stdio.h>

int main() {
    int size = 3;

    double matrix[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%lf ", matrix[i][j]);
        }

        printf("\n");
    }

    double sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((j == 0) || (j == size - 1)) {
                sum += matrix[i][j];
                count++;
            } else if ((i == 0) || (i == size - 1)) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    printf("%lf", sum / count);
}