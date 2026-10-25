#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";
    int maxLength = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%s\n", word1);
        scanf("%s\n", word2);
        int length1 = strlen(word1);
        int length2 = strlen(word2);
        printf("Word 1: %s (Length: %d)\n", word1, length1);
        printf("Word 2: %s (Length: %d)\n", word2, length2);
        int result = strcmp(word1, word2);
        if (result == 0) {
            printf("Comparison: identical\n");
        } else {
            printf("Comparison: different\n");
        }
        strcpy(combined, word1);
        strcat(combined, " ");
        strcat(combined, word2);
        printf("Combined: %s\n", combined);
        int currentLength = strlen(combined);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longest_combined, combined);
        }
    }
    printf("Longest combined string: %s\n", longest_combined);
    return 0;
}