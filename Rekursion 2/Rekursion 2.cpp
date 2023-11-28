#include <stdio.h>

int potenz_rekursiv(int a, int b, int n) {
    int temp = a + b;
    if (n == 1) {
        return a + b;
    }
    else if (n == 0) {
        return 1;
    }
    temp *= potenz_rekursiv(a, b, n - 1);
    return temp;
}


int main(int argc, char* argv[]) {
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    printf("%d", potenz_rekursiv(a, b, c));
    return 0;
}

