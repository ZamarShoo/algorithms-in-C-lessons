#include <stdio.h>

int main() {
    int number;
    int max = 0;
    int tmp;
    for (int i = 1; i < 5; i++) {
        printf("Enter %i number: ", i);
        scanf("\n%i", &number);
        if (number > max) {
            tmp = max;
            max = number;
            number = tmp;
        }
    }
    printf("max number is: %i", max);


    return 0;
}