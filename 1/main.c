#include<stdio.h>
#include <stdlib.h>

void inputmas(int *a, int n)
{
int i;
for(i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
}

void sort(int *a, int n)
{
  int i, j, tmp;

  for(i = 0; i < n; i++)
  for(j = n - 1; j >= 0; j--)
  if(a[j] < a[j+1])
  {
      tmp = a[j];
      a[j] = a[j+1];
      a[j+1] = tmp;
  }
}

void outputmas(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);
}
int main()
{

    int n;
    int *a;

    scanf("%d", &n);
    a = (int*)calloc(n, sizeof(int));
    inputmas(a, n);
    sort(a, n);
    outputmas(a, n);
return 0;
}
