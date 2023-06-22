#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(char* input, struct Student* students, int numStudents) {
    char* token = strtok(input, " ");
    int count = 0;

    while (token != NULL && count < numStudents) {
        students[count].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[count].name, token, sizeof(students[count].name));
        token = strtok(NULL, " ");
        students[count].marks = atof(token);

        token = strtok(NULL, " ");
        count++;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Clear the newline character from the input buffer

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    char input[100];
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline character

    parseAndInitialize(input, students, numStudents);

    // Printing the initialized array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
