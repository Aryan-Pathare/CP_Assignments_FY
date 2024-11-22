#include <stdio.h> 
 
void multiply(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2) { 
    if (c1 != r2) { 
        printf("Multiplication not possible!\n"); 
        return; 
    } 
 
    for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c2; j++) { 
            C[i][j] = 0; 
            for (int k = 0; k < c1; k++) { 
                C[i][j] += A[i][k] * B[k][j]; 
            } 
        } 
    } 
} 
 
void display(int mat[10][10], int r, int c) { 
    for (int i = 0; i < r; i++) { 
        for (int j = 0; j < c; j++) { 
            printf("%d ", mat[i][j]); 
        } 
        printf("\n"); 
    } 
} 
 
int main() { 
    int r1, c1, r2, c2; 
 
    printf("Enter the number of rows for Matrix A: "); 
    scanf("%d", &r1); 
    printf("Enter the number of columns for Matrix A: "); 
    scanf("%d", &c1); 
 
    printf("Enter the number of rows for Matrix B: "); 
    scanf("%d", &r2); 
    printf("Enter the number of columns for Matrix B: "); 
    scanf("%d", &c2); 
 
    if (c1 != r2) { 
        printf("Multiplication not possible!\n"); 
        return 0; 
    } 
 
    int A[10][10], B[10][10], C[10][10]; 
 
    printf("Enter elements of Matrix A:\n"); 
    for (int i = 0; i < r1; i++) { 
        for (int j = 0; j < c1; j++) { 
            printf("Enter element A[%d][%d]: ", i + 1, j + 1); 
            scanf("%d", &A[i][j]); 
        } 
    } 
 
    printf("Enter elements of Matrix B:\n"); 
    for (int i = 0; i < r2; i++) { 
        for (int j = 0; j < c2; j++) { 
            printf("Enter element B[%d][%d]: ", i + 1, j + 1); 
            scanf("%d", &B[i][j]); 
        } 
    } 
 
    multiply(A, B, C, r1, c1, r2, c2); 
printf("Result of multiplication:\n"); 
display(C, r1, c2); 
return 0; 
} 