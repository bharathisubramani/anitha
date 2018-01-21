#include<stdio.h>
int main()
{
int i,n,count=0;
scanf("%d",&n);
printf("enter the number");
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
if(count==0)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
}
return 0;
}
