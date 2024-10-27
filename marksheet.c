#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    // Calculate average marks
    average = (marks1 + marks2 + marks3) / 3;

    // Determine grade based on average
    if (average >= 90) {
        printf("Average: %.2f, Grade: A\n", average);
    } else if (average >= 80) {
        printf("Average: %.2f, Grade: B\n", average);
    } else if (average >= 70) {
        printf("Average: %.2f, Grade: C\n", average);
    } else if (average >= 60) {
        printf("Average: %.2f, Grade: D\n", average);
    } else {
        printf("Average: %.2f, Grade: F\n", average);
    }

    return 0;
}
