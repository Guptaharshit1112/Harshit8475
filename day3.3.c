#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Convert the number to a string for easier manipulation
    char str[5];
    sprintf(str, "%d", num);

    // Loop through each digit position
    for (int i = 0; i < 4; i++) {
        // Create a new number by excluding the current digit
        int newNum = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                newNum = newNum * 10 + (str[j] - '0');
            }
        }

        // Update the largest number if necessary
        if (newNum > largest) {
            largest = newNum;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
