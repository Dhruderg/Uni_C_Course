#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int n, m; // Dividenten
    scanf("%d %d", &n, &m);
    for (int num = 1; num <= 200; num++) {
        if (num % n == 0 && num % m == 0) {
            printf("fizzbuzz\n");
        }
        else if (num % n==0&& num % m != 0) {
            printf("fizz\n");
        }
        else if(num % m == 0 && num % n != 0){
            printf("buzz\n");
        }
        else {
            printf("%d \n", num);
        }
    }

    return 0;
}
