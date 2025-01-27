#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit5, sum;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Check if the number is five digits
    if (number >= 10000 && number <= 99999) {
        // Extract each digit
        digit1 = number / 10000;            // First digit
        digit2 = (number / 1000) % 10;      // Second digit
        digit3 = (number / 100) % 10;       // Third digit
        digit4 = (number / 10) % 10;        // Fourth digit
        digit5 = number % 10;               // Fifth digit

        // Calculate the sum of the digits
        sum = digit1 + digit2 + digit3 + digit4 + digit5;

        // Output the result
        printf("The sum of the digits is: %d\n", sum);
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}
