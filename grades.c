#include <stdio.h>

float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);

float calculateAverage(int grades[], int size) {
    int sum = 0;
    float average;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
        average = (float)sum / size;
    }
    return average;
}

int findHighestGrade(int grades[], int size) {
    int high = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > high) {
            high = grades[i];
        } 
    }
    return high;
}

char determineLetterGrade(int grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 80) {
        return 'B';
    } else if (grade >= 70) {
        return 'C';
    } else if (grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
} 
int main() {
    int size;
    scanf("%d", &size);
    int grades[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &grades[i]);
    }
    
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);
    
    int highest = findHighestGrade(grades, size);
    printf("Highest grade: %d\n", highest);
    
    printf("\nStudent Grades:\n");
    for (int i = 0; i < size; i++) {
        char letterGrade = determineLetterGrade(grades[i]);
        printf("Student %d: %d - %c\n", i+1, grades[i], letterGrade);
    }
    
    return 0;
}