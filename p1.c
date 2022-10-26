#include<stdio.h>
int f1(int x)
{
    printf("%d ",x);
    return(x+1);
}
void main()
{
    int (*p)(int);
    p=f1;
    printf("%d",p(3));
}
