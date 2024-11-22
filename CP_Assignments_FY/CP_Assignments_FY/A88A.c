#include <stdio.h>  // Include standard input-output library
#include <string.h> // Include string manipulation library

int main() { 
    char str1[50] = "Hello";  // Declare a character array and initialize it with "Hello"
    char str2[50] = "Worldd"; // Declare a character array and initialize it with "Worldd"
    char str3[50];            // Declare an empty character array for copying strings

    // Print the length of str1 using strlen function
    printf("Length of str1: %lu\n", strlen(str1)); 

    // Copy the contents of str1 into str3 using strcpy function
    strcpy(str3, str1); 
    // Print str3 after copying the content of str1
    printf("str3 after copying str1: %s\n", str3); 

    // Compare str1 and str2 using strcmp function and store the result
    int result = strcmp(str1, str2); 
    if (result == 0) 
        printf("str1 and str2 are equal.\n");  // Print if str1 and str2 are equal
    else if (result > 0) 
        printf("str1 is greater than str2.\n");  // Print if str1 is greater than str2
    else 
        printf("str1 is smaller than str2.\n");  // Print if str1 is smaller than str2

    // Concatenate str1 to the end of str2 using strcat function
    strcat(str2, str1); 
    // Print the concatenated result
    printf("%s\n", str2); 

    return 0;  // Return 0 to indicate successful execution
}
////Explanation of the Code:

////Including Libraries:

////#include <stdio.h>: This library is needed for standard input and output operations.

////#include <string.h>: This library is required for string manipulation functions.

////Main Function:

////String Initialization:

////char str1[50] = "Hello";: Initializes str1 with "Hello".

////char str2[50] = "Worldd";: Initializes str2 with "Worldd".

//char str3[50];: Declares str3 for copying strings.

//String Length:

//strlen(str1): Computes the length of str1 and prints it.

//String Copy:

//strcpy(str3, str1): Copies the contents of str1 into str3.

//Prints str3 after copying str1.

//String Comparison:

//strcmp(str1, str2): Compares str1 and str2.

//Prints whether str1 is equal to, greater than, or smaller than str2 based on the comparison result.

//String Concatenation:

//strcat(str2, str1): Concatenates str1 to the end of str2.

//Prints the concatenated string str2.

//Feel free to ask if you need more explanations or modifications!