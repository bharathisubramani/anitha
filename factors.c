#include<stdio.h>
int main()
{
int g,i;
scanf("%d",&g);
for(i=1;i<=g;i++)
{
if(g%i==0)
{
printf(" %d",i);
}
}
return 0;
}
