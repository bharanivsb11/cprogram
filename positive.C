#include<stdio.h>
int main()
{
int x;
printf("enter the value of x");
scanf("%d",&x);
if(x>0)
{
printf("given number is positive");
}
else if(x<0)
{
printf("the given number is negative");
}
else
{
printf("the given number is zero");
}
return 0;
}
