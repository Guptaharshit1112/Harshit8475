#include <stdio.h>

// Define the structure
struct MyStruct {
    int member1;
    float member2;
    char member3;
};

// Function to initialize array of structures
void initializeStructArray(struct MyStruct arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Assign initial values to members
        arr[i].member1 = 0;
        arr[i].member2 = 0.0;
        arr[i].member3 = '\0';
    }
}

int main() {
    // Define an array of structures
    struct MyStruct myArray[5];

    // Initialize the array
    initializeStructArray(myArray, 5);

    // Print the initialized values
    for (int i = 0; i < 5; i++) {
        printf("Member 1: %d\n", myArray[i].member1);
        printf("Member 2: %f\n", myArray[i].member2);
        printf("Member 3: %c\n", myArray[i].member3);
        printf("\n");
    }

    return 0;
}
