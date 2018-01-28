#include<stdio.h>
int main()
{
int a,h;
scanf("%d%d",&a,&h);
a=a^h;
h=a^h;
a=a^h;
printf("%d %d",a,h);
return 0;
}
