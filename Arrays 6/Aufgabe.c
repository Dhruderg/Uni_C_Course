#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char Word[40] = { 0 };
    char Word2[40] = { 0 };
    int num1, num2 = 0;
    int x = 0;

    scanf("%s %d %d", Word, &num1, &num2);

        for (int i = num1; i <= num2; i++) {
            Word2[x] = Word[i]; //From Index num1 until index num2, write letters into 2nd array
            x++;
        }

        printf("%s %d-%d: %s\n", Word, num1, num2, Word2);

    return 0;
}