#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

void swapFields(struct Student *s1, struct Student *s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student student1, student2;

    // Input details for student1
    printf("Enter details for student1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("GPA: ");
    scanf("%f", &student1.gpa);

    // Input details for student2
    printf("\nEnter details for student2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("GPA: ");
    scanf("%f", &student2.gpa);

    printf("\nBefore swapping:\n");
    printf("Student1: %s, %d, %.2f\n", student1.name, student1.age, student1.gpa);
    printf("Student2: %s, %d, %.2f\n", student2.name, student2.age, student2.gpa);

    // Swap fields using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student1: %s, %d, %.2f\n", student1.name, student1.age, student1.gpa);
    printf("Student2: %s, %d, %.2f\n", student2.name, student2.age, student2.gpa);

    return 0;
}
