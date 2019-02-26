#include <stdio.h>


int main() {
    int year, t1, t2, i = 0;
    do{
        printf("Vvedite vash vozrast: ");
        scanf("%d", &year);
    }while (0 > year || year > 150);

    t1 = year % 10;
    t2 = year % 100;

    if(t1 == 1 && t2 != 11){
        printf("%d god",year);
        i++;
    }

    if(t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20)){
        printf("%d goda",year);
        i++;
    }

    if(i==0){
        printf("%d let",year);
    }

}