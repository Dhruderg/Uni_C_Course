#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double x;
    int amount = 0;
    double numbers[10];
    double Durchschnitt = 0;

    while (amount < 10) {
        if (scanf("%lf", &x) != 1) {
            // Invalid input or end of input
            break;
        }

        if (x >= 1.0 && x <= 5.0) {
            numbers[amount] = x;
            amount++;
        }
        else {
            break; //Stop if input invalid
        }
    }

    for (int i = 0; i < amount; i++) {
        Durchschnitt += numbers[i];
    }

    if (amount > 0) {
        printf("Durchschnitt (N=%d): %.2lf", amount, Durchschnitt / amount);
    }
    else {
        printf("Durchschnitt (N=%d): %.2lf", amount, 0.0);
        //If this shit is not there, I get -nan as output -_-
    }

    return 0;
}