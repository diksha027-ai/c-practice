#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    weight_result = scanf("%f", &weight);
    height_result = scanf("%f", &height);

    
    if (weight_result < 30 || weight_result > 300) {
        printf("Weight out of range!\n");
    }
    if (height_result < 1.0 || height_result > 2.5) {
        printf("Height out of range!\n");
    }
    
    bmi = weight_result / (height_result * height_result);
    printf("BMI: %.f\n", bmi);
    
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 || bmi <= 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 || bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
    // Print results
    
    return 0;
}