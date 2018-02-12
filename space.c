#include<stdio.h>
#include<string.h>
int main()
{
int i,flag=0;
char a[10];
gets(a);
for(i=0;i<=10;i++)
{
if(a[i]==' ')
flag++;
}
printf("%d",flag);
return 0;
}
