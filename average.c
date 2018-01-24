#include<stdio.h>
int main()
{
int n,b=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
b=b+a[i];
}
b=b/n;
printf("\n the average value is%d",b);
return 0;
}
