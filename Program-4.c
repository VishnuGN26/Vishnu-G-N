#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int counts[10] = {0}; 

    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                counts[j]++;
            }
        }
    }

    printf("{");
    for (int j = 1; j <= 9; j++) {
        printf("%d: %d", j, counts[j]);
        if (j != 9) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}
