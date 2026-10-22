#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0; // Initialize sum to 0

    // Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store original number in a temporary variable to keep track
    temp = num;

    // Handle negative numbers by converting to positive
    if (temp < 0) {
        temp = -temp;
    }

    // Loop until the number becomes 0
    while (temp > 0) {
        digit = temp % 10;  // Extract the last digit
        sum += digit;       // Add the digit to sum
        temp = temp / 10;   // Remove the last digit from the number
    }

    // Display the result
    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}
