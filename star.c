#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char a[100];
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if((i==l/2)&&(l%2!=0))
{
a[i]='*';
}
else if((i==l/2)&&(l%2==0))
{
a[i]='*';
a[i-1]='*';
}
}
printf("%s",a);
return 0;
}
