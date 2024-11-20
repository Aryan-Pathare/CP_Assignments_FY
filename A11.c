#include <stdio.h>  // Preprocessor command to include the standard input-output header file

int main() {  // Main function where execution of the program begins
    int a, b, c, d;  // Declaration of four integer variables

    printf("Enter the value of a : ");  // Print message asking the user to enter the value of 'a'
    scanf("%d", &a);  // Read and store the input value in variable 'a'

    printf("Enter the value of b : ");  // Print message asking the user to enter the value of 'b'
    scanf("%d", &b);  // Read and store the input value in variable 'b'

    printf("Enter the value of c : ");  // Print message asking the user to enter the value of 'c'
    scanf("%d", &c);  // Read and store the input value in variable 'c'

    printf("Enter the value of d : ");  // Print message asking the user to enter the value of 'd'
    scanf("%d", &d);  // Read and store the input value in variable 'd'

    printf("\nArithmetic operators:\n");  // Print message to indicate the start of arithmetic operations section
    printf("%d + %d = %d\n", a, b, a + b);  // Print the result of addition
    printf("%d - %d = %d\n", a, b, a - b);  // Print the result of subtraction
    printf("%d * %d = %d\n", a, b, a * b);  // Print the result of multiplication
    printf("%d / %d = %d\n", a, b, a / b);  // Print the result of division
    printf("(%d %% %d) = %d\n", a, b, a % b);  // Print the result of modulus operation

    printf("\nLogical operators:\n");  // Print message to indicate the start of logical operations section
    printf("(a > b) && (c > d): %d\n", (a > b) && (c > d));  // Print the result of logical AND operation
    printf("(a > b) || (c > d): %d\n", (a > b) || (c > d));  // Print the result of logical OR operation
    printf("!(a > b): %d\n", !(a > b));  // Print the result of logical NOT operation

    printf("\nBitwise operators:\n");  // Print message to indicate the start of bitwise operations section
    printf("a & b = %d\n", a & b);  // Print the result of bitwise AND operation
    printf("a | b = %d\n", a | b);  // Print the result of bitwise OR operation
    printf("a ^ b = %d\n", a ^ b);  // Print the result of bitwise XOR operation
    printf("~a = %d\n", ~a);  // Print the result of bitwise NOT operation
    printf("a << 2 = %d\n", a << 2);  // Print the result of left shift operation
    printf("a >> 2 = %d\n", a >> 2);  // Print the result of right shift operation

    return 0;  // Return 0 to indicate that the program ended successfully
}
