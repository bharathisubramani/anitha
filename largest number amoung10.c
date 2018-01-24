#include<stdio.h>
int main()
{
int n,big;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\t%d",a[i]);
}
big=a[0];
for(int i=1;i<n;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("\nthe largest value is%d",big);
return 0;
}
