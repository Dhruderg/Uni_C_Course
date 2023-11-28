#include <stdio.h>



double reihe_rekursiv(float a, float b, int N, int n) {
    double temp = 0;
    if (n<N)    //run till n<N
    {
        
        temp += reihe_rekursiv(a, b, N, n+1); //increase n
    }
    temp += (a + ((2.0 * (float) n) * b));
    return temp;
}


int main(int argc, char* argv[]) {
    float a, b;
    int c;
    scanf_s("%f %f %d", &a, &b, &c);
    printf("%.1lf", reihe_rekursiv(a, b, c,1));     //n=1 at the end
    return 0;
}

