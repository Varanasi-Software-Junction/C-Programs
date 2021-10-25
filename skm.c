#include<stdio.h>
int main()
{
    /*change the deshmal value to binery value*/
    int n,x;
    int base,y;
    int mult=1;
    int result=0;
     printf("enter the deshmel value :");
     scanf("%d %d",&n,&y);
     int power=1;
    while(n>0)
    {
       
        int rem=n%y;
        n=n/y;
        result=result+(rem*power);
        power*=10;
        


    }
    printf("%d",result);
    return 0;
}