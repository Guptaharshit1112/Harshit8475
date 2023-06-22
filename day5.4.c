#include <stdio.h>

// Structure to hold student information
struct Student {
    char name[50];
    int marks;
};

// Function to swap two structures
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform the descending order sort
void sortDescending(struct Student students[], int n) {
    int i, j;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    // Example usage
    struct Student students[] = {
        {"John", 75},
        {"Alice", 90},
        {"Michael", 82},
        {"Emily", 68},
        {"Daniel", 95}
    };
    
    int numStudents = sizeof(students) / sizeof(students[0]);
    
    printf("Before sorting:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }
    
    sortDescending(students, numStudents);
    
    printf("\nAfter sorting in descending order of marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }
    
    return 0;
}
