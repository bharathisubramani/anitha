#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char a[100];
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if((a[i]>='0')&&(a[i]<='9')&&((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z')))
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
