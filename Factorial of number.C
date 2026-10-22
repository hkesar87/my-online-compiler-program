#include <stdio.h> // conio.h hata diya

int main() {       // void ki jagah int lagaya
    int input_number, i;
    long factorial = 1; 

    // clrscr(); hata diya kyunki online me zaroorat nahi hai

    printf("Enter a positive integer: ");
    scanf("%d", &input_number);

    if (input_number < 0) {
        printf("Error! Negative numbers ka factorial nahi hota.\n");
    } 
    else {
        for (i = 1; i <= input_number; i++) {
            factorial = factorial * i; 
        }
        printf("Factorial of %d is: %ld\n", input_number, factorial);
    }

    // getch(); hata diya kyunki screen apne aap ruki rahegi
    return 0; 
}
