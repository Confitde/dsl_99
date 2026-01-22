#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j, k, choice;

    
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    printf("\n1. Addition\n");
    printf("\n2. Subtraction\n");
    printf("\n3. Multiplication\n");
        
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            printf("Addition of matrices:\n");
            break;

        case 2: 
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                }
            }
            printf("Subtraction of matrices:\n");
            break;

        case 3: 
            
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    for(k = 0; k < 2; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            printf("Multiplication of matrices:\n");
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
