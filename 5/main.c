#include <stdio.h>

int main() {
    const char **month[12][1] = {"January", "February", "March", "April", "May", "June", "July",
                           "August", "September", "October", "November", "December"};


    printf("Enter the number on the month: ");
    int numberMonth;
    scanf("%i", &numberMonth);

    printf("you choose %s", **(month + numberMonth - 1));

    return 0;
}