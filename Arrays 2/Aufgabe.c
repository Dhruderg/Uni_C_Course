#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x = 0;
    char Word[40] = { 0 };
    scanf("%s", Word); //Strings and Arrays don't need the & operator, already poiting where they are
    for (int i = 0; i < 40 && Word[i] != '\0'; i++) {
        if (Word[i] >= 'a' && Word[i] <= 'z') {
            x++;
        }
    }
    printf("%d Kleinbuchstaben", x);

    return 0;
}
