#include <stdio.h>




double reihe_iterativ(float a, float b, int n) {
    int i = 1;
    double temp = 0;
    while(i <= n)
    {
        temp += (a + ((2.0 * (float) i) * b));
        i++;
    }
    return temp;
}


int main(int argc, char* argv[]) {
    float a, b;
	int c;
    scanf_s("%f %f %d", &a, &b, &c);
    printf("%.1lf", reihe_iterativ(a, b, c));
    return 0;
}

