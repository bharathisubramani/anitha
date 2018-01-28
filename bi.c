#include<Lstdio.h>
int main()
{
int a,b,r;
scanf("%d%d",&a,&b);
r=a;
a=b;
b=r;
printf("%d %d",a,b);
return 0;
}
