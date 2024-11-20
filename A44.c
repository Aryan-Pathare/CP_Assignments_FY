#include<stdio.h>  // Include the standard input-output library

// Main function where the program execution begins
int main() { 
    int n, r, nCr;  // Declare integer variables for n, r, and nCr (combination result)
    unsigned long int nf, rf, nrf;  // Declare unsigned long integer variables for factorials

    // Function declaration for factorial
    unsigned long int factorial(int); 

    // Prompt the user to enter values for n and r
    printf("Enter n and r:"); 
    // Read the input values and store them in n and r
    scanf("%d%d", &n, &r); 

    // Check for invalid input where n is less than r or either n or r are negative
    if (n < r || n < 0 || r < 0) { 
        printf("Invalid data\n");  // Print an error message for invalid input
    } else { 
        // Calculate factorials of n, r, and (n-r)
        nf = factorial(n); 
        rf = factorial(r); 
        nrf = factorial(n - r); 

        // Calculate combination (nCr) using the formula n! / (r! * (n-r)!)
        nCr = nf / (rf * nrf); 

        // Print the result of the combination calculation
        printf("%dC%d = %d\n", n, r, nCr); 
    } 
    return 0;  // Return 0 to indicate successful execution
} 

// Function definition for calculating the factorial of a number
unsigned long int factorial(int n) { 
    unsigned long int fact = 1;  // Initialize fact to 1
    int i;  // Declare an integer variable for the loop
    // Loop from 1 to n to calculate factorial
    for (i = 1; i <= n; i++) { 
        fact = fact * i;  // Multiply fact by i in each iteration
    } 
    return fact;  // Return the calculated factorial
}
//Explanation:

//User Input:

//The program prompts the user to enter two integers n and r.

//Validation:

//The program checks if n is less than r or if either n or r are negative. If any of these conditions are true, it prints "Invalid data" and does not proceed with the calculation.

//Factorial Calculation:

//The factorial function calculates the factorial of a given number using a for loop. This function is called three times to calculate the factorials of n, r, and (n-r).

//Combination Calculation:

//The program calculates the combination (nCr) using the formula n! / (r! * (n-r)!).

//Output:

//The program prints the result of the combination calculation in the format nCr.

//Feel free to ask if you need more explanations or modifications!