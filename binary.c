#include<stdio.h>
 
 int main()
 {
     int n=13;
      int base=2;
      int mult=1;
      int result=0;
     while(n>0)

     {
         int rem=n % base;
         n=n / base;
         result=result + rem * mult;
         mult=mult*10;

     }
     printf("%d",result);
         return 0;
     }

