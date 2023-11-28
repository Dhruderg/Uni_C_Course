#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]) {
    double num1, num2, num3, num4;
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    double numbers[4] = { num1, num2, num3, num4 }; // scan numbers
    int x = 0; // declare int
    for (int i = 0; i < 4; i++) { // run till array done
        if (numbers[x] > numbers[i]) { //  if saved current number bigger than next number --> switch biggest number
            x = i;
        }
    }
    printf("Kleinste Zahl: %.1lf an Index %d", numbers[x], x);
    return 0;
}
