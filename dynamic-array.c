#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Array of size %d created successfully!\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum: %d\n", min);
    
    
    double average = (double)sum / n;
    int count_above_avg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            count_above_avg++;
        }
    }
    printf("Elements above average: %d\n", count_above_avg);
    
    printf("Memory used: %d bytes\n", n * (int)sizeof(int));
    
    free(arr);
    printf("Memory successfully freed!\n");
    
    return 0;
}