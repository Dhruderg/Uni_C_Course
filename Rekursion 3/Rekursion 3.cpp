#include <stdio.h>

int input() {
    int a;
    scanf_s("%d", &a);
    return a;
}

int faculty(int a) {
    int temp = a;
    if (a == 1) {
        return 1;
    }
    temp *= faculty(a - 1);
    return temp;
}


int main(int argc, char* argv[]) {
    int b = input();
    printf("%d! = %d", b, faculty(b));
    return 0;
}
