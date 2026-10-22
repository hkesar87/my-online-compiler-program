include <stdio.h>

int main() {
    // Declare 3x3 matrices a, b, and the result matrix c
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    // 1. Take user input for Matrix A
    printf("Enter elements for Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 2. Take user input for Matrix B
    printf("\nEnter elements for Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // 3. Initialize Matrix C elements to 0 and perform Multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0; // Essential step to avoid garbage values
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 4. Display the resulting Matrix C
    printf("\nResultant Matrix C (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
