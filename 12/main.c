#include <stdio.h>
#define ARRAY_LENGHT 3

int maximum(int* array, int lenght);

int main() {

    int arr[ARRAY_LENGHT];

    int i = 0;
    while (i < ARRAY_LENGHT) {
        printf("Enter value #%d = ", i);
        scanf("%d", arr + i);
        i++;
    }

    int max = maximum(arr, ARRAY_LENGHT);

    printf("Max = %i", max);

    return 0;
}

int maximum(int* array, int lenght) {

    int maximum = 0;
    for (int i = 0; i < lenght; i++) {
        if (*(array + i) > maximum) {
            maximum = *(array + i);
        }
    }

    return maximum;
}