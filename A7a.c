#include <stdio.h> 
 
void sortArray(int arr[], int n) 
{ 
    for (int i = 0; i < n - 1; i++) 
    { 
        for (int j = i + 1; j < n; j++) 
        { 
            if (arr[i] < arr[j]) 
            { 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
} 
 
int main() 
{ 
    int n; 
    printf("Enter number of elements : "); 
    scanf("%d", &n); 
    int arr[n]; 
    int total = 0, max; 
 
    printf("Enter the elements which you want to display : "); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &arr[i]); 
        total = total + arr[i]; 
    } 
 
    max = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] > max) 
            max = arr[i]; 
    } 
 
    float avg = (float)total / n; 
    printf("Average: %.2f\n", avg); 
    printf("Largest: %d\n", max); 
 
    sortArray(arr, n); 
    printf("Array in descending order: "); 
    for (int i = 0; i < n; i++) 
    { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 