#include <stdio.h>

int main() {
    const char **seasons[4][1] = {"Winter", "Spring", "Summer", "Autumn"};


    printf("Enter the number on the month: ");
    int numberSeason;
    scanf("%i", &numberSeason);

    numberSeason = (numberSeason / 3) % 4;
    printf("you choose %s", **(seasons + numberSeason));

    return 0;
}