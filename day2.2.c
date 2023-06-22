#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size); // Allocate memory for temporary storage
    memcpy(temp, a, size); // Copy contents of 'a' to 'temp'
    memcpy(a, b, size); // Copy contents of 'b' to 'a'
    memcpy(b, temp, size); // Copy contents of 'temp' to 'b'
    free(temp); // Free the allocated memory
}

int main() {
    int int1 = 5, int2 = 10;
    printf("Before swapping: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swapping: int1 = %d, int2 = %d\n", int1, int2);
    
    float float1 = 2.5, float2 = 7.8;
    printf("Before swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swapping: float1 = %.2f, float2 = %.2f\n", float1, float2);
    
    char char1 = 'A', char2 = 'Z';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);
    
    return 0;
}
