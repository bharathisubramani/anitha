#include<stdio.h>
int main()
{
int i,n,m,count=0,j;
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
for(j=2;j<n;j++)
{
if(n%j==0)
count++;
}
}
if(count==0)
{
printf("%d ",j);
}
return 0;
}
