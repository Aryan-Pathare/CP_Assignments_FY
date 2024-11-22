#include <stdio.h> 
#include <string.h> 
int main() 
{ 
char str1[50] = "Hello"; 
char str2[50] = "Worldd"; 
char str3[50]; 
printf("Length of str1: %lu\n", strlen(str1)); 
strcpy(str3, str1); 
printf("str3 after copying str1: %s\n", str3); 
int result = strcmp(str1, str2); 
if (result == 0) 
printf("str1 and str2 are equal.\n"); 
else if (result > 0) 
printf("str1 is greater than str2.\n"); 
else 
printf("str1 is smaller than str2.\n"); 
 
    strcat(str2, str1); 
    printf("%s\n", str2); 
 
    return 0; 
} 