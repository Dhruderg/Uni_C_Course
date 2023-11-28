#include <stdio.h>

int main(int argc, char* argv[]) {
    int i;
    int *ptr;
    int **ptrptr;

    ptr = &i;
    ptrptr = &ptr;

    i = 1;
    printf("%d\n", i);

    printf("%d\n", *ptr);
    **ptrptr = 2;
    printf("%d", i);
    return 0;

}
