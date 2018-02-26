#include<stdio.h>
int main()
{
int n,s=0,d,a;
scanf("%d",&a);
a=n;
while(n!=0)
{
s=s*10;
s=s+n%10;
n=n/10;
}
while(s!=0)
{
s=s*10;
a=a/10;
}


