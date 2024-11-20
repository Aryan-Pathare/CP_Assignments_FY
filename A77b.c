#include <stdio.h>  // Include the standard input-output library

// Function to multiply two matrices A and B and store the result in matrix C
void multiply(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2) { 
    if (c1 != r2) {  // Check if the number of columns in A is equal to the number of rows in B
        printf("Multiplication not possible!\n");  // Print error message if multiplication is not possible
        return;  // Exit the function
    } 

    // Loop to calculate the product of matrices
    for (int i = 0; i < r1; i++) {  // Iterate through rows of matrix A
        for (int j = 0; j < c2; j++) {  // Iterate through columns of matrix B
            C[i][j] = 0;  // Initialize the element C[i][j] to 0
            for (int k = 0; k < c1; k++) {  // Iterate through columns of matrix A and rows of matrix B
                C[i][j] += A[i][k] * B[k][j];  // Calculate the product and add to C[i][j]
            } 
        } 
    } 
} 

// Function to display a matrix
void display(int mat[10][10], int r, int c) { 
    for (int i = 0; i < r; i++) {  // Iterate through rows of the matrix
        for (int j = 0; j < c; j++) {  // Iterate through columns of the matrix
            printf("%d ", mat[i][j]);  // Print each element of the matrix
        } 
        printf("\n");  // Print a newline character after each row
    } 
} 

// Main function where the program execution begins
int main() { 
    int r1, c1, r2, c2;  // Declare variables for the number of rows and columns of matrices A and B

    // Prompt the user to enter the dimensions of matrix A
    printf("Enter the number of rows for Matrix A: "); 
    scanf("%d", &r1);  // Read the number of rows for matrix A
    printf("Enter the number of columns for Matrix A: "); 
    scanf("%d", &c1);  // Read the number of columns for matrix A

    // Prompt the user to enter the dimensions of matrix B
    printf("Enter the number of rows for Matrix B: "); 
    scanf("%d", &r2);  // Read the number of rows for matrix B
    printf("Enter the number of columns for Matrix B: "); 
    scanf("%d", &c2);  // Read the number of columns for matrix B

    // Check if the matrices can be multiplied
    if (c1 != r2) {  // If the number of columns in A is not equal to the number of rows in B
        printf("Multiplication not possible!\n");  // Print error message
        return 0;  // Exit the program
    } 

    int A[10][10], B[10][10], C[10][10];  // Declare the matrices A, B, and C

    // Prompt the user to enter the elements of matrix A
    printf("Enter elements of Matrix A:\n"); 
    for (int i = 0; i < r1; i++) {  // Iterate through rows of matrix A
        for (int j = 0; j < c1; j++) {  // Iterate through columns of matrix A
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);  // Prompt the user to enter each element
            scanf("%d", &A[i][j]);  // Read each element and store it in the matrix A
        } 
    } 

    // Prompt the user to enter the elements of matrix B
    printf("Enter elements of Matrix B:\n"); 
    for (int i = 0; i < r2; i++) {  // Iterate through rows of matrix B
        for (int j = 0; j < c2; j++) {  // Iterate through columns of matrix B
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);  // Prompt the user to enter each element
            scanf("%d", &B[i][j]);  // Read each element and store it in the matrix B
        } 
    } 

    // Call the multiply function to multiply matrices A and B, and store the result in matrix C
    multiply(A, B, C, r1, c1, r2, c2); 

    // Print the result of the multiplication
    printf("Result of multiplication:\n"); 
    display(C, r1, c2);  // Call the display function to print the matrix C

    return 0;  // Return 0 to indicate successful execution
}
//Explanation:

//Matrix Multiplication:

//The multiply function checks if the number of columns in Matrix A is equal to the number of rows in Matrix B. If not, it prints an error message and exits.

//It then multiplies the matrices using nested loops and stores the result in Matrix C.

//Matrix Display:

//The display function prints the elements of a matrix row by row.

//Main Function:

//The program prompts the user to enter the dimensions and elements of matrices A and B.

//It checks if the multiplication is possible based on the input dimensions.

//The program then calls the multiply function to compute the product of matrices A and B.
//Finally, it displays the resulting matrix using the display function.

//This version of the code includes comments that explain each line and concept. If you need any further explanations or have additional questions, feel free to ask!//