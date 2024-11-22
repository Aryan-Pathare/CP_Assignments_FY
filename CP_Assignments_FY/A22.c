#include <stdio.h>  // Include standard input-output library

int main() {  // Main function where execution begins
    int n, i;  // Declare integer variables 'n' and 'i'

    printf("Enter no of rows : ");  // Prompt the user to enter the number of rows
    scanf("%d", &n);  // Read the input value and store it in variable 'n'

    // Loop to print the upper part of the pattern
    for (i = 1; i <= n; i++) {  // Outer loop for each row (from 1 to n)
        for (int k = 1; k <= n - i; k++) {  // Inner loop to print leading spaces
            printf(" ");  // Print a space
        }
        for (int j = 1; j <= i; j++) {  // Inner loop to print stars
            printf(" *");  // Print a star followed by a space
        }
        printf("\n");  // Move to the next line after printing one row
    }

    // Loop to print the lower part of the pattern
    for (i = 1; i <= n; i++) {  // Outer loop for each row (from 1 to n)
        for (int k = 1; k <= i; k++) {  // Inner loop to print leading spaces
            printf(" ");  // Print a space
        }
        for (int j = 1; j <= n - i; j++) {  // Inner loop to print stars
            printf(" *");  // Print a star followed by a space
        }
        printf("\n");  // Move to the next line after printing one row
    }

    return 0;  // Return 0 to indicate successful execution
}
