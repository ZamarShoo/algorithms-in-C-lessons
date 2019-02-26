#include <stdio.h>

int main() {
    int residual;
    int quotient;
    int chastnoe = 0;
    do {
        printf("Enter quotient (N)");  //chastnoe
        scanf("%i", &quotient);

        printf("Enter residual (K)"); //ostatok
        scanf("%i", &residual);
    } while((quotient < 0) || (residual < 0));

    while(quotient >= residual){
        chastnoe++;
        quotient -= residual;
    }

    printf("chastnoe: %i \t ostatok: %i", chastnoe, quotient);

    return 0;
}