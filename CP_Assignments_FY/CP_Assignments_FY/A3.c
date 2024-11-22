#include <stdio.h> 
#include <math.h> 
long factorial(int n) 
 { 
    long fact = 1; 
    for(int i=1; i<=n; i++) 
        fact *= i; 
    return fact; 
} 
 
 
int isArmstrong(int n) 
{ 
    int sum = 0, temp = n; 
    while(temp != 0) { 
        int digit = temp % 10; 
        sum += digit * digit * digit; 
        temp /= 10; 
    } 
    return (sum == n); 
} 
 
 
int isPerfectSquare(int n) 
{ 
    int sqrt_n = sqrt(n); 
    return (sqrt_n * sqrt_n == n); 
} 
 
 
int isPrime(int n) 
{ 
    if(n <= 1) return 0; 
    for(int i=2; i*i<=n; i++) 
        if(n % i == 0) return 0; 
    return 1; 
} 
 
 
int largestThree(int a, int b, int c) 
{ 
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); 
} 
 
 
  int lcm(int a, int b) 
  { 
         int max=(a>b)?a:b; 
         while(1) 
         { 
             if(max%a==0 && max%b==0) 
                return max; 
             max++; 
         } 
 
  } 
 
  int gcd(int a, int b) 
{ 
    if(b == 0) 
    return a; 
    return gcd(b, a % b); 
} 
 
int main() 
{ 
    int choice, n1, n2, n3; 
 
    START: 
    printf("\nMenu:\n"); 
    printf("1. Factorial\n"); 
    printf("2. Armstrong Number\n"); 
    printf("3. Perfect Square\n"); 
    printf("4. Prime Number\n"); 
    printf("5. Largest of Three Numbers\n"); 
    printf("6. LCM\n"); 
    printf("7. GCD\n"); 
    printf("8. Exit\n"); 
    printf("Enter your choice: "); 
    scanf("%d", &choice); 
 
    switch(choice) 
    { 
        case 1: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("Factorial: %ld\n", factorial(n1)); 
            break; 
        case 2: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sArmstrong number\n", n1, isArmstrong(n1) ? "" : "not "); 
            break; 
        case 3: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sperfect square\n", n1, isPerfectSquare(n1) ? "" : "not "); 
            break; 
        case 4: 
            printf("Enter a number: "); 
            scanf("%d", &n1); 
            printf("%d is %sprime number\n", n1, isPrime(n1) ? "" : "not "); 
            break; 
        case 5: 
            printf("Enter three numbers: "); 
            scanf("%d %d %d", &n1, &n2, &n3); 
            printf("Largest number: %d\n", largestThree(n1, n2, n3)); 
            break; 
        case 6: 
            printf("Enter two numbers: "); 
            scanf("%d %d", &n1, &n2); 
            printf("LCM: %d\n", lcm(n1, n2)); 
            break; 
        case 7: 
            printf("Enter two numbers: "); 
            scanf("%d %d", &n1, &n2); 
            printf("GCD: %d\n", gcd(n1, n2)); 
            break; 
        case 8: 
            goto END; 
        default: 
            printf("Invalid choice. Please choose again.\n"); 
    } 
 
    goto START; 
 
    END: 
 return 0; 
}