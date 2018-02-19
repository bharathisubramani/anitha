#include<stdio.h>
int main()
{
int b[100],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
if(b[0]>b[i])
{
b[0]=b[i];
}
}
printf("%d",b[0]);
return 0;
}
