#include<stdio.h>
int main()
{
int a,b,t=0;
scanf("%d%d",&a,&b);
printf(" \nthe value of a= %d and b= %d ",a,b);
t=a;
a=b;
b=t;
printf("\nthe swaped value of a=%d  and b=%d is",a,b);
return 0;
}
