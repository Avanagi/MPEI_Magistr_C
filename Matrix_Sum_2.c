/*
Сумма элементов, лежащих ниже ПОБ. Д. и кратные 5
*/
#include<stdio.h>

int main() {
    int matrix[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix[i][j] = i + j;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((i + j > 4 - 1) && (matrix[i][j] % 5 == 0)) {
                sum += matrix[i][j];
            }
        }
    }
    
    printf("%d", sum);
}