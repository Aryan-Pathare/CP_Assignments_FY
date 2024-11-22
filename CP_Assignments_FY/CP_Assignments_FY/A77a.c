#include <stdio.h>  // Include the standard input-output library

// Function to sort an array in descending order
void sortArray(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) {  // Loop through the array from the first element to the second last
        for (int j = i + 1; j < n; j++) {  // Loop through the array from the element after i to the last
            if (arr[i] < arr[j]) {  // Compare the current element with the next element
                int temp = arr[i];  // Swap the elements if the current element is less than the next element
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
} 

// Main function where program execution begins
int main() { 
    int n;  // Declare an integer variable for the number of elements

    // Prompt the user to enter the number of elements
    printf("Enter number of elements : "); 
    // Read the number of elements and store it in the variable n
    scanf("%d", &n); 
    int arr[n];  // Declare an array of size n
    int total = 0, max;  // Declare variables for the total sum and maximum value

    // Prompt the user to enter the elements of the array
    printf("Enter the elements which you want to display : "); 
    for (int i = 0; i < n; i++) {  // Loop through the array to read the elements
        scanf("%d", &arr[i]);  // Read each element and store it in the array
        total = total + arr[i];  // Add the current element to the total sum
    } 

    // Initialize the maximum value to the first element of the array
    max = arr[0]; 
    for (int i = 1; i < n; i++) {  // Loop through the array to find the maximum element
        if (arr[i] > max)  // If the current element is greater than the current maximum
            max = arr[i];  // Update the maximum value
    } 

    // Calculate the average of the elements
    float avg = (float)total / n; 
    // Print the average value
    printf("Average: %.2f\n", avg); 
    // Print the maximum value
    printf("Largest: %d\n", max); 

    // Sort the array in descending order
    sortArray(arr, n); 
    // Print the sorted array
    printf("Array in descending order: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]);  // Print each element of the sorted array
    } 
    printf("\n");  // Print a newline character

    return 0;  // Return 0 to indicate successful execution
}
//Explanation:

//User Input:

//The program prompts the user to enter the number of elements in the array and the elements themselves.

//Total and Maximum Calculation:

//It calculates the total sum of the array elements and finds the maximum element in the array.

//Average Calculation:

//The average of the elements is calculated by dividing the total sum by the number of elements.

//Sorting:

//The sortArray function sorts the array in descending order using nested loops and a swapping mechanism.

//Output:

//The program prints the average value, the maximum value, and the sorted array.

//Feel free to ask if you need more explanations or modifications!