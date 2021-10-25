#include<stdio.h>
int main()
{
    int sum=0;
    int count=0;
int price;
do
{
printf("Enter the price. Enter a 0integer to stop\n");
scanf("%d",&price);
sum+=price;
count+=1;
} while (price>0);
printf("Sum= %d, Count=%d",sum,count);
    return 0;
}