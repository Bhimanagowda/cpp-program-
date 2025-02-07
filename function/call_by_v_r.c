#include<stdio.h>
void swap(int *a,int *b)
  {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
  }
  
int main()
  {
    int m=10,n=20;

    swap(&m,&n);
    printf("%d %d",m,n);
    return 0;
  } 