#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char Word[40] = { 0 };
    scanf("%s", Word); //Strings and Arrays don't need the & operator, already poiting where they are
    for (int i = 0; i < 40 && Word[i] != '\0'; i++) {
        if (Word[i] >= 'a' && Word[i] <= 'z') {
            Word[i] = Word[i] - 32;
        }
        else if (Word[i] >= 'A' && Word[i] <= 'Z') {
            Word[i] = Word[i] + 32;
        }
    }
    printf("%s", Word);

    return 0;
}
