#include<stdio.h>
int main()
{
int g,f=0;
scanf("%d",&g);
while(g!=0)
{
g=g/10;
f++;
}
printf("%d",f);
return 0;
}
