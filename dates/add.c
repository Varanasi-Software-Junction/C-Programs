#include<stdio.h>
int isLeapYear(int year);
int daysInMonth(int m,int y);
int ValidDays(int d,int m,int y);
void main()
{
   /* printf("%d\n",isLeapYear(2021));
    printf("%d",isLeapYear(2022));
    printf("%d",daysInMonth(2,2020));*/
    printf("d",Validays(10 9 2002))
}
int isLeapYear(int year)
{
if(year % 400 ==0)
return 1;
if(year % 4==0 && year%100 != 0)
return 1;
else
return 0;

return 0;

}
int daysInMonth(int m,int y)
{
    if(m==4 || m==6 || m==9 || m==11)
     return 30;
     if(m==2)
     {
         if(isLeapYear(y))
         return 29;
         else 
         return 28;
     }
     return 31;
    
}
int ValidDay(int d,int m, int y)
{ 
if(y>1)
return 1;
{ 
if(m<12) 
return 1;
if(d<=31)
return 1;
} 
else
return 0
}