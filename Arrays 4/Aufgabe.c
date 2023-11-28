#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char letter;
    char Word[40] = { 0 };
    scanf("%c %s", &letter, Word); //Strings and Arrays don't need the & operator, already poiting where they are
    for (int i = 0; i < 40 && Word[i] != '\0'; i++) {
        switch (Word[i]) {   // Check if Word at index i is any of these letters
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            Word[i] = letter;
        default:
            break;
        }
    }
    printf("%s", Word);

    return 0;
}
