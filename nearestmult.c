#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=n;i<10000;i++)
{
if(i%10==0)
{
printf("%d",i);
}
}
return 0;
}
