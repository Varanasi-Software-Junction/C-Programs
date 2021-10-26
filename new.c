#include<stdio.h>
void add();
void sub();
void mult();
void divide();
void main()
{
    add();
    mult();
    divide ();
    sub();
    add();
    sub();
   
}




void add ()
{
int x,y;
printf("\nenter number to add :");
scanf("%d %d",&x,&y);
printf("sum = %d",x+y);
}



void sub ()
{
int x,y;
printf("\nenter number to subtract :");
scanf("%d %d",&x,&y);
printf("sub = %d",x-y);
}

void mult ()
{
int x,y;
printf("\nenter number to multiply :");
scanf("%d %d",&x,&y);
printf("multiply = %d",x*y);
}

void divide ()
{
int x,y;
printf("\nenter number to divide :");
scanf("%d %d",&x,&y);
printf("divide = %d",x/y);
}