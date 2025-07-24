/*
Чётные в начале, нечётные в конце (с сортировкой пузырьком)
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even[even_count++] = a[i];
        else
            odd[odd_count++] = a[i];
    }

    for (int i = 0; i < even_count - 1; i++) {
        for (int j = 0; j < even_count - i - 1; j++) {
            if (even[j] > even[j + 1]) {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < odd_count - 1; i++) {
        for (int j = 0; j < odd_count - i - 1; j++) {
            if (odd[j] > odd[j + 1]) {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    int k = 0;
    for (int i = 0; i < even_count; i++)
        a[k++] = even[i];
    for (int i = 0; i < odd_count; i++)
        a[k++] = odd[i];

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
