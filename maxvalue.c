#include<stdio.h> 
int max (int a,int b);
int main()
{
    max (5,3);
}









int max (int a,int b)
{
    int x;
    if(a>b)
     x=a;
    else
    x= b;
    printf("%d",x);
}