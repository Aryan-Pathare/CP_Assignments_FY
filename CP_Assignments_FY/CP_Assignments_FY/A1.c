#include<stdio.h> 
int main() 
{ 
    int a,b,c,d; 
    printf("Enter the value of a : "); 
    scanf("%d", &a); 
    printf("Enter the value of a b : "); 
    scanf("%d", &b); 
    printf("Enter the value of a c : "); 
    scanf("%d", &c); 
    printf("Enter the value of a d : "); 
    scanf("%d", &d); 


    printf("\nArithmetic operators:\n"); 
    printf("%d + %d = %d\n", a, b, a+b); 
    printf("%d - %d = %d\n", a, b, a-b); 
    printf("%d * %d = %d\n", a, b, a*b); 
    printf("%d / %d = %d\n", a, b, a/b); 
    printf("(%d %% %d) = %d\n", a, b, a%b); 


    printf("\nLogical operators:\n"); 
    printf("(a > b) && (c > d): %d\n", (a > b) && (c > d)); 
    printf("(a > b) || (c > d): %d\n", (a > b) || (c > d)); 
    printf("!(a > b): %d\n", !(a > b)); 


    printf("\nBitwise operators:\n"); 
    printf("a & b = %d\n", a & b); 
    printf("a | b = %d\n", a | b); 
    printf("a ^ b = %d\n", a ^ b); 
    printf("~a = %d\n", ~a); 
    printf("a << 2 = %d\n", a << 2); 
    printf("a >> 2 = %d\n", a >> 2); 
    return 0; 
}