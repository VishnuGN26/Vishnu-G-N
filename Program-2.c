#include <stdio.h>

int main() {
    int a, i;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    for(i = 0; i < a; i++) {
        printf("%d", 2 * i + 1);
        if(i != a - 1) {
            printf(", ");
        }
    }
    
    return 0;
}
