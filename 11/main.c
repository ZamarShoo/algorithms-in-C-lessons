#include <stdio.h>

int main() {
    int num;
    float sum = 0;
    int counter = 0;
    while (1){
    printf("enter the number: ");
    scanf("%i", &num);
    if(num == 0)break;
    if(num <0 || num % 10 != 8)continue;
    sum += num;
    counter++;
    }

    printf("sum is: \t %g", sum / counter);

    return 0;
}