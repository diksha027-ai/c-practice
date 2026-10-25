#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Enter a sentence: ");
    char sentence[200];
    scanf("%s", sentence);
    printf("Original: %s\n", sentence);
    int len = strlen(sentence);
    printf("Characters: %d\n", len);

    int v_count = 0;
    for (int i = 0; i < len; i++) {
        char c = sentence[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'I' || c == 'O' || c == 'U' || c == 'E') {
            v_count++;
        }
    }
    printf("Vowels: %d\n", v_count);
    printf("Uppercase: ");
    for (int j = 0; j < len; j++) {
        printf("%c", toupper(sentence[j]));
    }
    printf("\n");
    return 0;
}