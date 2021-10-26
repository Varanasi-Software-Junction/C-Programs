#include<stdio.h>
#include<math.h>
int isPrime(int n);
void main()
{
   int n=100;
   for(int i=2;i<=n;i++)
   if(isPrime(i))
   printf("%d,",i);
}




int isPrime(int n)
{
int limit;
limit =sqrt(n);
for(int i=2;i<=limit;i++)
if(n % i == 0)
return 0;

return 1;

}