#include<stdio.h>
int main()
{
int i,n,m,s=0,a,d;
scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
a=i;
while(a!=0)
{
d=a%10;
s=s+d*d*d;
a=a/10;
}
if(s==i)
{
printf("%d ",i);
}
return 0;
}
