#include<stdio.h>
int main()
{
int g=0,h=1,i,k,n;
scanf("%d",&n);
printf("%d %d",g,h);
for(i=0;i<=n;i++)
{
k=g+h;
g=h;
h=k;
printf("% d",k);
}
return 0;
}
