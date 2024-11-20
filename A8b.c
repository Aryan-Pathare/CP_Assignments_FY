#include <stdio.h> 
 
int main() { 
    char input[100]; 
    int start, end, length = 0, palindrome = 1; 
 
    printf("Enter a string: "); 
    scanf("%s", input); 
 
    while (input[length] != '\0') { 
        length++; 
    } 
 
    for (start = 0, end = length - 1; start < length; start++, end--) { 
        if (input[start] != input[end]) { 
            palindrome = 0; 
            break; 
        } 
    } 
 
if (palindrome) 
printf("The string is a palindrome.\n"); 
else 
printf("The string is not a palindrome.\n"); 
return 0; 
} 