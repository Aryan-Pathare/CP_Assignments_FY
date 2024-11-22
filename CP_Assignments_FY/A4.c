#include<stdio.h> 
int main() 
{ 
    int n,r,nCr; 
    unsigned long int nf,rf,nrf; 
    unsigned long int factorial(int); 
    printf("Enter n and r:"); 
    scanf("%d%d",&n,&r); 
    if(n<r || n<0 || r<0) 
    { 
        printf("Invalid data\n"); 
    } 
    else 
    { 
        nf=factorial(n); 
        rf=factorial(r); 
        nrf=factorial(n-r); 
        nCr=nf/(rf*nrf); 
        printf("%dC%d=%d\n",n,r,nCr); 
    } 
    return 0; 
} 
unsigned long int factorial(int n) 
{ 
    unsigned long int fact=1; 
    int i; 
    for(i=1;i<=n;i++) 
    { 
        fact=fact*i; 
    } 
    return fact; 
}