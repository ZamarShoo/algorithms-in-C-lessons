#include <stdio.h>

int howIn(int num);
int makeZero(int zero);


int main() {
    int number;
    printf("Enter the number: ");
    scanf("%i", &number);

    for (int i = 1; i < number ; i++) {
        int num = howIn(i);
        int i2 = i * i;
        num = makeZero(num);
        int how = i2 % num;
        if(i == how){
            printf("%i\t\t%i\n", i, i2);
            continue;
        }
    }


    return 0;
}


int howIn(int num) {
    int counter = 0;
    do{
        num /=10;
        counter++;
    }while(num != 0);
    return counter;
}

int makeZero(int zero){
    int n = 10;
    for (int i = 1; i < zero; ++i) {
        n *= 10;
    }
    return n;
}