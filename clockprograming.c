#include<stdio.h>
#include<conio.h>
void clock(int hr,int min);
int main()

{ 
    int hr,min;
    printf("enter the time" );
    scanf("%d %d",&hr,&min);
   clock(hr,min);
    return 0;
}
void clock(int hr,int min)
{
 if(hr<=11)
    printf("%d:%d am",hr,min);
    else if(hr==12)
    printf("%d:%d pm",hr,min);
    else
   printf("%d:%d pm",hr-12,min); 




}