#include<stdio.h>
int main()
{
int n,s;
scanf("%d",&n);
while(n!=0)
{
s=n%10;
if(s%2!=0)
{
printf(" %d",s);
}
n=n/10;
}
return 0;
}
