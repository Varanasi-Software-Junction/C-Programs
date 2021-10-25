#include <stdio.h>
int main()
{
    int mid;
    int a,b,c;
    printf("enter the three values");
    scanf("%d %d %d",&a,&b,&c);
    if(b>a && b<c || b>c && b<a) 
    mid=b;
    else
    if(a>b && b<c || c<b && a>b)
    mid=b;
    else
    //if(c>a && a<b)
    mid=c;
    printf("%d",mid);


return 0; 
}