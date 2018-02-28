#include<stdio.h>
int main()
{
int n;
int s=0,t;
scanf("%d",&n);
while(n!=0)
{
s=s*10;
s=s+n%10;
n=n/10;
}
while(s!=0)
{
t=s%10;
s=s/10;
printf("%d\t",t);
}
return 0;
}
