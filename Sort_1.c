/*
Чётные в начале, нечётные в конце (с сохранением порядка)
*/
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n], even[n], odd[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even[even_count++] = a[i];
        else
            odd[odd_count++] = a[i];
    }

    int k = 0;
    for (int i = 0; i < even_count; i++)
        a[k++] = even[i];
    for (int i = 0; i < odd_count; i++)
        a[k++] = odd[i];

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

}
