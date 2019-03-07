#include <stdio.h>
#include <stdlib.h>

#define MaxN 20

void print(int *a);
void swap(int *a, int *b);
int find(int *a);

int main(int argc, char *argv[]) {
    int a[MaxN];
    *a = (int*)calloc(MaxN, sizeof(int));

    for(int i = 0; i < MaxN; i++)
    {
        a[i] = rand();
    }
    puts("Array before sort");
    print(a);

    for(int i = 0; i < MaxN; i++)
        for(int j = 0; j < MaxN - 1; j++)
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
    puts("Array after sort");
    print(a);
    int indexOfNumber = find(&a);
    if(indexOfNumber==-1) {
        printf("number not found");
    } else {
        printf("\nindex your number is: %i", indexOfNumber);
    }

    return 0;
}


void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void print(int *a) {
    int i;
    for(i = 0; i < MaxN; i++)
        printf("%i\n", a[i]);
    printf("\n");
}

int find(int *a) {
    int value;
    printf("Input value for search:");
    scanf("%i",&value);
    int L = 0, R = MaxN - 1;
    int m = L + (R - L) / 2;
    while(L <= R && a[m] != value)
    {
        if (a[m] < value)
            L = m + 1;
        else
            R = m - 1;
        m = L + (R - L) / 2;
    }
    if (a[m] == value)
         return m;
    else
         return -1;
}