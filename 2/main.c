#include <stdio.h>
#include <stdlib.h>

#define N 10

//ф-ция для обмена значений ячеек
void swapEl(int *arr, int i)
{
    int buff;
    buff = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = buff;
}


void myShakerSort(int *arr, int size)
{
    int leftMark = 1;
    int rightMark = size - 1;
    while (leftMark <= rightMark) {
        for (int i = rightMark; i >= leftMark; i--)
             if (arr[i - 1] > arr[i]) swapEl(arr, i);
         leftMark++;

         for (int i = leftMark; i <= rightMark; i++)
              if (arr[i - 1] > arr[i]) swapEl(arr, i);
              rightMark--;
      }
}

int main()
{
    int *A[N];
    *A = (int*)calloc(N, sizeof(int));
    for(int i=0; i < N; i++)
    {
        scanf("%d ",&A[i]);
    }

    printf("\n");
    myShakerSort(&A, N); // сортировка

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}