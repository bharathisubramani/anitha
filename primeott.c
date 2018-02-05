#include<stdio.h>
int main()
{
int a,s=0,i;
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
s++;
}
}
if(s==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
