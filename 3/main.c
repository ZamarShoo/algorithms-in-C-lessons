#include <stdio.h>


void onlyTwo(int *first, int *second);
void onlyThree(int *first, int *second);
int printingNumbers(int first, int second);

int main() {

    int first_number;
    printf("Enter first number: ");
    scanf("%i", &first_number);

    int second_number;
    printf("Enter second number: ");
    scanf("%i", &second_number);

    int howVar;
    printf("How many variable use (2 or 3): ");
    scanf("%i", &howVar);

    switch (howVar) {
        case 2:
            onlyTwo(&first_number, &second_number);
            printingNumbers(first_number, second_number);
            break;

        case 3:
            onlyThree(&first_number, &second_number);
            printingNumbers(first_number, second_number);
            break;

        default:
            printf("No option selected");
    }

    return 0;
}
    void onlyTwo(int *first, int *second) {
        printf("You use with Two variables:");
        *first ^= *second;
        *second ^= *first;
        *first ^= *second;
    }

    void onlyThree(int *first, int *second) {
        printf("You use with Three variables:");
        int tmp;
        tmp = *first;
        *first = *second;
        *second = tmp;
    }

    int printingNumbers(int first, int second) {
        return printf("\nFirst number = %i\nSecond number = %i", first, second);
}