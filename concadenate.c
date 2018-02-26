#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,l;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=' ')
printf("%c",a[i]);
}
return 0;
}
