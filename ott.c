#include<stdio.h>
int main()
{
int n,c=0,t;
scanf("%d",&n);
while(n!=0)
{
t=n%10;
c=c+t;
n=n/10;
}
printf("%d",c);
return 0;
}
