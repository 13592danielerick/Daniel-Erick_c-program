#include <stdio.h>

int main() {
    int num_students;
    float total = 0.0;
    float score;
    
    // Prompt for number of students
    printf("Enter the number of students in the class: ");
    scanf("%d", &num_students);
    
    // Use for loop to enter each student's score
    for(int i = 1; i <= num_students; i++) {
        printf("Enter score for student %d: ", i);
        scanf("%f", &score);
        total += score;
    }
    
    // Calculate average
    float average = total / num_students;
    
    // Display the average
    printf("\nThe average score of the class is: %.2f\n", average);
    
    return 0;
}