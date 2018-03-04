#include<stdio.h>
int main()
{
char a[100];
int n=0,m=1,i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
{
n=++m;
}
}
printf("%d",n);
return 0;
}
