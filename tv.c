#include <stdio.h>

int main() {
    int num;
    int current_width = 0;
    int width = 0;
    int height = 1; 
    char ch;

    while (scanf("%d%c", &num, &ch) == 2) {
        current_width++;

        if (ch == '\n') {
            if (width == 0) {
                width = current_width;
            }
            
            if (num == 3) {
                break;
            }
            
            height++;
            current_width = 0; 
        } else if (num == 3) {
            
            if (width == 0) {
                width = current_width;
            }
            break;
        }
    }

    printf("%d %d\n", height, width);

    return 0;
}
