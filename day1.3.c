#include <stdio.h>

int main() 
{
    int roll_no, m1, m2, m3, total;
    char name[20];
    float percentage;

    printf("Enter roll number: ");
    scanf("%d", &roll_no);
    getchar(); // Consume the newline character

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter marks for Physics: ");
    scanf("%d", &m1);
    printf("Enter marks for Maths: ");
    scanf("%d", &m2);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    percentage = (total / 300)*100;

    printf("\nStudent Roll Number: %d", roll_no);
    printf("\nName: %s", name);
    printf("Marks 1: %d", m1);
    printf("\nMarks 2: %d", m2);
    printf("\nMarks 3: %d", m3);
    printf("\nTotal: %d", total);
    printf("\nPercentage: %f", percentage);

    return 0;
}