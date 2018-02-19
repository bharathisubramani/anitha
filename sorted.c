#include<stdio.h>
int main()
{
int b[100],i,n,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
if(a[0]>a[i])
{
t=a[0];
a[0]=a[i];
a[i]=t;
}}
printf("%d",a[0]);
return 0;
}

