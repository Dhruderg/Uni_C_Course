#include <stdio.h>

int potenz_iter(int a, int b, int n) {
    int temp = a + b;
    while (n > 1) {
        temp *= a + b;
        n--;
    }
    if (n == 0) {
        return 1;
    }
    return temp;
}

int main(int argc, char* argv[]) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", potenz_iter(a, b, c));
    return 0;
}

