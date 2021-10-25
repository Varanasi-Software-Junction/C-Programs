#include<stdio.h>
void binery(int x, int y);
 
 int main()
 {
    binery(13,2);
     

 }
 void binery(int n,int base)

 { 
 int mult=1;
 int result=0;
 while(n>0)
 {
     int result=0,mult=1;
         int rem=n % base;
 
         n=n / base;
         result=result + rem * mult;
         mult=mult*10;
         printf("%d",result);        
     }
 }
