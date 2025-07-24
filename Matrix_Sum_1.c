/*
Сумма элементов, лежащих выше ГЛ. Д. и кратные 3
*/
#include<stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    int matrix[size][size];

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((i < j) && (matrix[i][j] % 3 == 0)) {
                sum += matrix[i][j];
            }
        }
    }

    printf("%d", sum);
    
}