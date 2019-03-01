#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inTenToTwo(int in, char* result);

int main() {
    int num;
    char bin[64] = "";
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    inTenToTwo(number, bin);
    printf("Your number is: %s", bin);


    return 0;
}

void inTenToTwo(int in, char* result) {
    char p[256];
    int i = 0;
    int temp = in;
    while (temp != 0) {
        temp = temp >> 1;
        i++;
    }
    p[i];
    while (in > 0) {
        p [--i] = (in % 2) ? '1' : '0';
        in /=2;
    }
    strcat(result, p);
}
