#include <stdio.h>
#include <math.h>


int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);

int main(int args, const char* argv[]) {
    printf("Enter the number for: a * x ^ 2 + b * x + c\n");

    int a;
    int b;
    do {
        printf("a and b don't = 0\n");
        printf("a = ");
        scanf("%d", &a);

        printf("\nb = ");
        scanf("%d", &b);
        }
    while((a == 0) || (b ==0));

    int c;
    printf("\nc = "); scanf("%d", &c);

    float x1; float x2;


    printf("\nYou are enter: (%d) * x1^2 + (%d) *x2 + (%d)\n", a, b, c);
    calculateSquareEquality(a, b, c, &x1, &x2);

    return 0;
}


int calculateSquareEquality(int a, int b, int c, float* x1, float* x2) {
    float D = (b)*(b) - 4*(a)*(c);
    if (D == 0) {
        *x1 = *x2 = ((-b + sqrtf(D))/ (2*a));
        return printf("x1 = x2 = %g\n", *x1);
    } else { if (D > 0) {
            *x1 = ((-b + sqrt(D))/ (2*a));
            *x2 = ((-b - sqrt(D))/ (2*a));
            return printf("x1 = %g, x2 = %g\n", *x1, *x2);
        } else {return printf("Don't have x1 and x2, because D < 0\n");}}
}