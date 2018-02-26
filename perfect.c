#include<stdio.h>
#include<math.h>
int main()
{
int a,b,p,c;
scanf("%d%d",&a,&b);
p=a*b;
c=sqrt(p);
if(p==c*c)
{
printf("perfect square");
}
else
{
printf("not a perfect square");
}
return 0;
}
