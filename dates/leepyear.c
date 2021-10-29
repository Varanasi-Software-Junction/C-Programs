/*programing by leep year*/
#include <stdio.h>
int main()
{
    int year;
    printf("enter a year :");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0) || (year%400==0))
    {
        printf("%d is a leep year",year);
    }
    else{ 
        printf("%dis a not leep year",year);

    }
    return 0;
}
