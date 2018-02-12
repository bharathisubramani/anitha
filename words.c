#include<stdio.h>
#include<string.h>
int main()
{
int i,s=0;
char b[10];
gets(b);
for(i=0;i<=10;i++)
{
if(b[i]==' ')
s++;
}
s=s+1;
printf("%d",s);
return 0;
}
