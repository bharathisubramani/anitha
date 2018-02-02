#include<stdio.h>
int main()
{
int l,f,i;
scanf("%d",&f);
int a[f];
for(i=0;i<f;i++)
{
scanf("%d",&a[i]);
l=a[0];
}
for(i=1;i<f;i++)
{
if(l>a[i])
{
l=a[i];
}}
printf("%d",l);
return 0;
}
