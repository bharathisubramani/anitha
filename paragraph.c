#include<stdio.h>
#include<string.h>
int main()
{
int i,l,s=1;
char a[10];
scanf("%s",&a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]=='.')
s++;
}
printf("%d",s);
return 0;
}
