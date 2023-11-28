#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char Word[40] = { 0 };
    char InvertedWord[40] = { 0 };
    int x = 0;
    scanf(" %s", Word);
    for (int i = 39; i >= 0; i--) { //count backwards
        if (Word[i] != '\0') { //ignore empty spaces
            InvertedWord[x] = Word[i];
            x++;
        }
    }

    printf("%s", InvertedWord);

    return 0;
}
