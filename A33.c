#include <stdio.h>  // Include the standard input-output header file
#include <math.h>   // Include the math library for mathematical functions

// Function to calculate the factorial of a number
long factorial(int n) { 
    long fact = 1;  // Initialize fact to 1
    for (int i = 1; i <= n; i++)  // Loop from 1 to n
        fact *= i;  // Multiply fact by i
    return fact;  // Return the calculated factorial
} 

// Function to check if a number is an Armstrong number
int isArmstrong(int n) { 
    int sum = 0, temp = n;  // Initialize sum to 0 and temp to n
    while (temp != 0) {  // Loop until temp is not 0
        int digit = temp % 10;  // Get the last digit of temp
        sum += digit * digit * digit;  // Add the cube of the digit to sum
        temp /= 10;  // Remove the last digit from temp
    } 
    return (sum == n);  // Return whether the sum is equal to the original number
} 

// Function to check if a number is a perfect square
int isPerfectSquare(int n) { 
    int sqrt_n = sqrt(n);  // Calculate the square root of n
    return (sqrt_n * sqrt_n == n);  // Return whether the square of sqrt_n is equal to n
} 

// Function to check if a number is a prime number
int isPrime(int n) { 
    if (n <= 1) return 0;  // Return 0 if n is less than or equal to 1
    for (int i = 2; i * i <= n; i++)  // Loop from 2 to the square root of n
        if (n % i == 0) return 0;  // Return 0 if n is divisible by i
    return 1;  // Return 1 if n is a prime number
} 

// Function to find the largest of three numbers
int largestThree(int a, int b, int c) { 
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  // Return the largest number
} 

// Function to calculate the least common multiple (LCM) of two numbers
int lcm(int a, int b) { 
    int max = (a > b) ? a : b;  // Find the maximum of a and b
    while (1) {  // Infinite loop
        if (max % a == 0 && max % b == 0)  // Check if max is divisible by both a and b
            return max;  // Return max if true
        max++;  // Increment max
    }
} 

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) { 
    if (b == 0) return a;  // Return a if b is 0
    return gcd(b, a % b);  // Recursive call to gcd with b and a % b
} 

int main() { 
    int choice, n1, n2, n3;  // Declare variables for choice and numbers

    START:  // Label for the start of the menu loop
    printf("\nMenu:\n");  // Print the menu
    printf("1. Factorial\n"); 
    printf("2. Armstrong Number\n"); 
    printf("3. Perfect Square\n"); 
    printf("4. Prime Number\n"); 
    printf("5. Largest of Three Numbers\n"); 
    printf("6. LCM\n"); 
    printf("7. GCD\n"); 
    printf("8. Exit\n"); 
    printf("Enter your choice: ");  // Prompt the user to enter their choice
    scanf("%d", &choice);  // Read the user's choice

    switch (choice) {  // Switch case to handle the user's choice
        case 1: 
            printf("Enter a number: ");  // Prompt the user to enter a number
            scanf("%d", &n1);  // Read the number
            printf("Factorial: %ld\n", factorial(n1));  // Print the factorial of the number
            break; 
        case 2: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sArmstrong number\n", n1, isArmstrong(n1) ? "" : "not ");  // Check and print if the number is an Armstrong number
            break; 
        case 3: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sperfect square\n", n1, isPerfectSquare(n1) ? "" : "not ");  // Check and print if the number is a perfect square
            break; 
        case 4: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sprime number\n", n1, isPrime(n1) ? "" : "not ");  // Check and print if the number is a prime number
            break; 
        case 5: 
            printf("Enter three numbers: "); 
            scanf("%d %d %d", &n1, &n2, &n3); 
            printf("Largest number: %d\n", largestThree(n1, n2, n3));  // Find and print the largest of three numbers
            break; 
        case 6: 
            printf("Enter two numbers: "); 
            scanf("%d %d", &n1, &n2); 
            printf("LCM: %d\n", lcm(n1, n2));  // Calculate and print the least common multiple
            break; 
        case 7: 
            printf("Enter two numbers: "); 
            scanf("%d %d", &n1, &n2); 
            printf("GCD: %d\n", gcd(n1, n2));  // Calculate and print the greatest common divisor
            break; 
        case 8: 
            goto END;  // Exit the program
        default: 
            printf("Invalid choice. Please choose again.\n");  // Print an error message for invalid choice
    } 

    goto START;  // Go back to the start of the menu loop

    END:  // Label for the end of the program
    return 0;  // Return 0 to indicate successful execution
}
