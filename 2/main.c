#include <stdio.h>

void withRec(int a, int n);
void withoutRec(int a, int n);

int main() {
    printf("a^n\n");

    int a;
    printf("a = ");
    scanf("%i", &a);

    int n;
    printf("n = ");
    scanf("%i", &n);


    char answer;
    printf("Using recursing? y/n");
    scanf("%s", &answer);

    switch(answer) {
        case 'y':
            withRec(a, n);
            break;

        case 'n':
            withoutRec(a, n);
            break;

        default:
            printf("I don't know what is this!");
    }

}


void withRec(int a, int n) {
    int i = 1;
    int sum = 1;
    while (i <= n) {
        sum *= a;
        i++;
    }
    printf("Answer: %i", sum);
}

void withoutRec(int a, int n) {
    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= a;
    }
    printf("Answer: %i", sum);
}