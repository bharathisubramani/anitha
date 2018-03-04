#include<stdio.h>
int main()
{
int n,a=0,b=1,c=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
a++;
}
for(i=0;i<=a;i++)
{
b=b*c;
}
printf("%d",b);
return 0;
}
