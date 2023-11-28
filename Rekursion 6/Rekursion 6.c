
#include <stdio.h>
#pragma warning(disable : 4996)  // Disable warning 4996 related to scanf_s


char findFirstUppercaseRecursive(char* str) {
    if (*str == '\0') {
        return ' '; // Return space if no uppercase letter is found
    }

    if (*str >= 'A' && *str <= 'Z') {
        return *str; // Return the first uppercase letter
    }

    return findFirstUppercaseRecursive(str + 1);
}

int main() {
    char input[50];

    // Eingabe eines Strings
    scanf("%49s", input);

    // Aufruf und Ausgabe
    printf("%c",findFirstUppercaseRecursive(input));

    return 0;
}