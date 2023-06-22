#include <stdio.h>

void printPattern1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    
    for (int i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern2(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    
    for (int i = 1; i <= (2 * (n - 2) + 1); i++) {
        printf(" ");
    }
    
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern3(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    
    for (int i = 1; i <= ((n - 2) * 2 + 1); i++) {
        printf(" ");
    }
    
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        printPattern1(i);
        printf("\n");
        if (i > 1) {
            printPattern2(i);
            printf("\n");
            printPattern3(i);
            printf("\n");
        }
    }
    
    return 0;
}
