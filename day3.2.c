#include <stdio.h>

void printBits(unsigned int num) {
    // Number of bits in an unsigned int
    int numBits = sizeof(unsigned int) * 8;

    // Loop through each bit from left to right
    for (int i = numBits - 1; i >= 0; i--) {
        // Use bitwise AND with a mask to check if the current bit is set
        unsigned int mask = 1 << i;
        int bit = (num & mask) ? 1 : 0;

        // Print the bit
        printf("%d", bit);

        // Print a space after every 8 bits for better readability
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
