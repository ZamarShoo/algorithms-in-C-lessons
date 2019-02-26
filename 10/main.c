#include <stdio.h>

int main() {
    int N;
    do {
        printf("Enter the number: ");
        scanf("%i", &N);
    } while (0 >= N);

    while (N != 0) {
        int residue = N % 10;
        if (residue % 2 !=0){
            printf("True");
            break;
        }
        N /= 10;
    }
    if(N == 0) printf("false");

    return 0;
}