#include <stdio.h>

int isPrime(int num, int start) {
    //Prime num check, end of recursion
    if (start == num) {
        return 1;
    }
    //1 or 0, return 0, if divideable then 0
    if (num % start == 0 || num <= 1) {
        return 0;
    }
    return isPrime(num, start + 1); // Count index (start) upwards
}

int main(int argc, char* argv[]) {
    int number;
    scanf("%d", &number);
    printf("%d", isPrime(number, 2));
    return 0;
}
