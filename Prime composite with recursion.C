#include <stdio.h>

// Yeh hai hamara Recursive Function
int checkPrime(int num, int i) {
    // Base Case 1: Agar check karte-karte hum number tak pahunch gaye, matlab wo Prime hai
    if (i == num) {
        return 1; 
    }
    
    // Base Case 2: Agar beech me kisi bhi number se poora divide ho gaya, matlab Composite hai
    if (num % i == 0) {
        return 0; 
    }
    
    // RECURSION: Agar upar dono galat hain, toh i ko +1 karke FIR SE checkPrime ko call karo
    return checkPrime(num, i + 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is Neither Prime nor Composite\n", n);
    } 
    else {
        // Hum check karna '2' se shuru kar rahe hain, isliye checkPrime(n, 2) bheja
        int result = checkPrime(n, 2); 
        
        if (result == 1) {
            printf("%d is a Prime Number\n", n);
        } else {
            printf("%d is a Composite Number\n", n);
        }
    }

    return 0;
}
