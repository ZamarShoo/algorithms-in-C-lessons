#include <stdio.h>


void ThreeTo(int a, int b);

int main() {
    int a = 3;
    int b = 20;
    int number = 1;
    while(1) {
        int operation;
        printf("1.\t +1\n2.\t*2\n3.\t3 to 20\n4.\tquit\n");
        scanf("%i", &operation);
        if(operation == 4) break;

        switch(operation) {
            case 1:
                number++;
                break;

            case 2:
                number *= 2;
                break;

            case 3:
                printf("\n\n\n");
                ThreeTo(a, b);
                break;

            default:
                printf("I don't know what is this");
        }
        printf("number: %i\n", number);
    }
}

void ThreeTo(int a, int b){
    int n = a;
    int counter = 0;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            n++;
        }
        else {
            n *= 2;
        }
        if(a < b) {
            ThreeTo(n, b);
        } else {

            if (n == b) {
                counter++;
                printf("---%i", counter);
            }
        }
    }
}