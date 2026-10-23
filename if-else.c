#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult);

    if (age >= 12) {
        if (height > 150) {
            if (age < 15) {
                if (hasAdult) {
                    printf("You can ride with adult supervision!");
                } else {
                    printf("Sorry, you need an adult with you");
                }
            } else {
                printf("You can ride by yourself!");
            }
        } else {
            printf("Sorry, you are not tall enough");
        }        
    } else {
        printf("Sorry, you are too young");
    }
    return 0;
}