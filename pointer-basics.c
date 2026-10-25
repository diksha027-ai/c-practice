#include <stdio.h>

int main() {
    int age = 25;
    char grade = 'A';
    float temperature = 98.6;
    int *age_ptr;
    char *grade_ptr;
    float *temp_ptr;
    age_ptr = &age;
    grade_ptr = &grade;
    temp_ptr = &temperature;
    printf("Age: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);
    printf("Temperature: %.1f\n", *temp_ptr);
    *age_ptr = 30;
    *grade_ptr = 'B';
    *temp_ptr = 99.5;
    printf("Age: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);
    printf("Temperature: %.1f\n", *temp_ptr); 
    return 0;
}