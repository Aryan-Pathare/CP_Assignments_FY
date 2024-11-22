#include <stdio.h> 
struct Student { 
char name[50]; 
int roll_no; 
int marks[3]; 
int total; 
}; 
void input(struct Student *s) { 
printf("Enter Name: "); 
scanf("%s", s->name); 
printf("Enter Roll Number: "); 
scanf("%d", &s->roll_no); 
printf("Enter marks in 3 subjects: "); 
    for (int i = 0; i < 3; i++) { 
        printf("Subject %d marks: ", i + 1); 
        scanf("%d", &s->marks[i]); 
    } 
 
    s->total = s->marks[0] + s->marks[1] + s->marks[2]; 
} 
 
void display(struct Student s) { 
    printf("%-20s %-10d %-10d\n", s.name, s.roll_no, s.total); 
} 
 
int main() { 
    int n; 
    printf("Enter number of students: "); 
    scanf("%d", &n); 
 
    struct Student students[n]; 
 
    for (int i = 0; i < n; i++) { 
        printf("\nEntering details for student %d:\n", i + 1); 
        input(&students[i]); 
    } 
 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (students[i].total < students[j].total) { 
                struct Student temp = students[i]; 
                students[i] = students[j]; 
students[j] = temp; 
} 
} 
} 
printf("\nMerit List:\n"); 
printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Total Marks"); 
for (int i = 0; i < n; i++) { 
display(students[i]); 
} 
return 0; 
}