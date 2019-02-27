#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void usingRand();
void dontUsingRand();

int main()
{
    printf("Using rand? y/n: ");
    char answer;
    scanf("%c", &answer);

    switch(answer) {
        case 'y':
            usingRand();
            break;

        case 'n':
            dontUsingRand();
            break;

        default:
            printf("Don't know what is this");

    }

    return 0;
}


void usingRand(){

    int nStartValue = time(NULL);

    srand(nStartValue);
    printf("%i\n",rand() % 100);
}

void dontUsingRand(){
    time_t sec;
    sec=time(NULL);

    sec=sec%3600;
    printf("%ld\n",sec % 100);
}