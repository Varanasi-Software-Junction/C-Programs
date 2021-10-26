
#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter side of triangel\n");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of the triange = %f\n",area);
    return 0;

}

