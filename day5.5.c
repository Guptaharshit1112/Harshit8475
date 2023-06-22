#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    // Add any other fields you need for each student
};

int searchStudentByName(const struct Student students[], int numStudents, const char* name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Return the index of the found student
        }
    }
    return -1; // Return -1 if student is not found
}

int main() {
    struct Student students[MAX_STUDENTS] = {
        {"Alice", 20},
        {"Bob", 19},
        // Add more students here
    };
    int numStudents = 2; // Update the number of students accordingly

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search for: ");
    scanf("%s", searchName);

    int index = searchStudentByName(students, numStudents, searchName);
    if (index != -1) {
        printf("Student found at index %d\n", index);
        // Access and print the student's details using students[index]
    } else {
        printf("Student not found\n");
    }

    return 0;
}
