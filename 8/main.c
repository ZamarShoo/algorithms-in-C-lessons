#include <stdio.h>

int main() {

    int a;
    printf("Enter a: ");
    scanf("%i", &a);

    int b;
    printf("Enter b: ");
    scanf("%i", &b);

    for (int i = 1; i <= b + 1; i++) {
        int a2 = a *  a;
        int a3 = a2 * a;
        printf("%i =\t%i\t%i\n", i, a2, a3);
        a++;
    }



    return 0;
}