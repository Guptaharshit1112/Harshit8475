#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalSetBits = 0;
    
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }
    
    printf("The total number of set bits in the given array is: %d\n", totalSetBits);
    
    return 0;
}
