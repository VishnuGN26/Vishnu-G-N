#include <stdio.h>

int main() {
    int a, i, count;

    printf("Enter a: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        count = a - 1; 
    } else {
        count = a;      
    }

    for (i = 0; i < count; i++) {
        printf("%d", 2 * i + 1);
        if (i != count - 1) {
            printf(", ");
        }
    }

    return 0;
}
