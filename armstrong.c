#include<stdio.h>
int main()
{
int a,n,s=0,d;
printf("enter the number\n");
scanf("%d",&n);
a=n;
while(a!=0)
{
d=a%10;
s=s+d*d*d;
a=a/10;
}
if(s==n)
{
printf("armstrong number");
}
else
{
printf("not armstrong number");
}
return 0;
}
