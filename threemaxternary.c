#include<stdio.h>
#include<math.h>
int isPrime(int n);
void main()
{
  int a=1,b=2,c=4;
int max=(a>=b)?a:b;//Simple if else. Value after ? is returned if condition is true, value after : if false
printf("Max=%d\n",max);
max=(a>=b && a>=c)? a:(b>=c)?b:c;//Ternary ladder
printf("Max=%d\n",max);
max=(a>=b)?(a>=c)?a:c:(b>=c)?b:c;//Nestd ternary
printf("Max=%d\n",max);

max=(a<b || a<c)?(b=c)?b:c:a;//Nestd ternary
printf("Max=%d\n",max);
}

