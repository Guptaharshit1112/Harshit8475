#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;

    // Loop through each number
    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        // Loop through each digit of the number
        while (num != 0) {
            int digit = num % 10;

            // Update the smallest and largest digits if necessary
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    // Check if valid numbers were entered
    if (smallestDigit == INT_MAX || largestDigit == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if the value of n is within a valid range
    if (n < 1) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];

    // Prompt for n numbers
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}
