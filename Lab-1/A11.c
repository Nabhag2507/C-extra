#include <stdio.h>

int main() {
    char name[100];
    int rollno;
    float marks[4], total = 0, percentage;

    // Input student's name and roll number
    printf("Enter student's name: ");
    scanf("%49s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollno);

    // Input marks for 4 subjects
    for (int i = 0; i < 4; i++) {
        while (1) {
            printf("Enter marks obtained in subject %d (out of 100): ", i + 1);
            scanf("%f", &marks[i]);
            if (marks[i] >= 0 && marks[i] <= 100) {
                total += marks[i];
                break;
            } else {
                printf("Please enter marks between 0 and 100.\n");
            }
        }
    }

    // Calculate percentage
    percentage = (total / 400) * 100;

    // Display the result
    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollno);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
