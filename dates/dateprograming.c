#include<stdio.h>
int isLeapYear(int year);
int daysInMonth(int m,int y);
int ValidDays(int d,int m,int y);
int GapBetweenDate(int d1,int m1,int y3,int d2, int m2,int y2);
void main()
{
    int y2=2021; 
    int y1=2002;
    int m2=10;
    int m1=9;
    int d2=29;
    int d1=10;
   printf("%d",GapBetweenDate(d1,m1,y1,d2,m2,y2));
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
    if(m==4 || m==6 || m==9 || m==11)     return 30;
     if(m==2)
     {
         if(isLeapYear(y))
         return 29;
         else 
         return 28;
     }
     return 31;
    
}
int ValidDays(int d,int m, int y)
{
if(y<1)
return 0; 
if(m<1 || m>12)
return 0;
if(d<1)
return 0;
int ndays=daysInMonth(m,y);
if(d>ndays)
return 0;
return 1;
}
int GapBetweenDate(int d1,int m1,int y1, int d2, int m2, int y2)
{ 
    //chek Gapbetweendate
     //27,10,2020 to 5,12,2021
    //d2>d1
    //d2-m2-y2 to di-m1-y1
    //so day to change 1,10,2020 1,12,2021
                                            
    int diff1= d2-1;
    int diff2= d1-1;
    int diff3=0;
   // month2 - month1
   //so change to month 1,1,2020 1,1,2021
    for(int m=1; m<=m2-1;m++)
    diff3=diff3+ daysInMonth(m,y2);
    int diff4= 0;
    for(int m=1; m<=m1-1;m++)
    diff4=diff4 + daysInMonth(m,y1);
    //1-1-y2 to 1-1-y1
    int diff5=0;
    for(int y=y1; y<=y2-1;y++)
    if(isLeapYear (y) ) 
    diff5=diff5+366;
    else
    diff5=diff5 + 365;
    int gap=diff1 + diff3 + diff5 - diff4 - diff2;
    return gap;
}


