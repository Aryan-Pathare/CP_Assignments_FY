#include <stdio.h>  // Include the standard input-output library

// Define a structure to hold student information
struct Student { 
    char name[50];  // Character array to store the student's name
    int roll_no;    // Integer to store the student's roll number
    int marks[3];   // Array to store the marks in 3 subjects
    int total;      // Integer to store the total marks
}; 

// Function to input details of a student
void input(struct Student *s) { 
    printf("Enter Name: ");  // Prompt the user to enter the student's name
    scanf("%s", s->name);    // Read the name and store it in the name array
    printf("Enter Roll Number: ");  // Prompt the user to enter the student's roll number
    scanf("%d", &s->roll_no);  // Read the roll number and store it
    printf("Enter marks in 3 subjects: ");  // Prompt the user to enter marks for 3 subjects
    for (int i = 0; i < 3; i++) {  // Loop to read marks for each subject
        printf("Subject %d marks: ", i + 1);  // Prompt for each subject's marks
        scanf("%d", &s->marks[i]);  // Read and store the marks in the array
    }
    // Calculate the total marks
    s->total = s->marks[0] + s->marks[1] + s->marks[2]; 
} 

// Function to display details of a student
void display(struct Student s) { 
    // Print the student's name, roll number, and total marks
    printf("%-20s %-10d %-10d\n", s.name, s.roll_no, s.total); 
} 

// Main function where program execution begins
int main() { 
    int n;  // Variable to store the number of students

    printf("Enter number of students: ");  // Prompt the user to enter the number of students
    scanf("%d", &n);  // Read the number of students

    // Declare an array of structures to hold details for n students
    struct Student students[n]; 

    // Loop to input details for each student
    for (int i = 0; i < n; i++) { 
        printf("\nEntering details for student %d:\n", i + 1);  // Prompt for each student
        input(&students[i]);  // Call the input function to get student details
    } 

    // Bubble sort algorithm to sort students based on total marks in descending order
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (students[i].total < students[j].total) { 
                // Swap the students if they are in the wrong order
                struct Student temp = students[i]; 
                students[i] = students[j]; 
                students[j] = temp; 
            } 
        } 
    } 

    // Print the merit list header
    printf("\nMerit List:\n"); 
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Total Marks"); 

    // Loop to display the sorted list of students
    for (int i = 0; i < n; i++) { 
        display(students[i]);  // Call the display function for each student
    } 

    return 0;  // Return 0 to indicate successful execution
}
//Explanation:

//Structure Definition:

//Defines a Student structure to hold the student's name, roll number, marks in 3 subjects, and total marks.

//Input Function:

//Takes a pointer to a Student structure.

//Prompts the user to enter the student's details (name, roll number, and marks).

//Calculates the total marks.

//Display Function:

//Takes a Student structure.

//Prints the student's name, roll number, and total marks.

//Main Function:

//Prompts the user to enter the number of students.

//Uses an array of Student structures to store the details of all students.

//Calls the input function for each student.

//Sorts the students based on their total marks in descending order using a bubble sort algorithm.

//Calls the display function to print the sorted list of students.

//Feel free to ask if you need further explanations or modifications!