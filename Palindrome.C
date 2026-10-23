#include <stdio.h>

int main() {
    int input_number, remainder, original_number;
    int reverse_number = 0; 

    printf("Enter an integer: ");
    scanf("%d", &input_number);

    // Original number ko save kar liya kyunki loop ke baad input_number 0 ho jayega
    original_number = input_number;

    // --- REVERSE VALA LOGIC ---
    while (input_number != 0) {
        remainder = input_number % 10;
        reverse_number = (reverse_number * 10) + remainder;
        input_number = input_number / 10;
    }
    // ---------------------------

    // FINAL CHECK: Agar ulta kiya hua number original ke barabar hai
    if (original_number == reverse_number) {
        printf("%d is a Palindrome number.\n", original_number);
    } else {
        printf("%d is not a Palindrome number.\n", original_number);
    }

    return 0;
}
