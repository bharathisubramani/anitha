#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int l,i,p=0,s=0,g=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
if(a[i]>='0'&&a[i]<='9')
{
g++;
}
else if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
{
p++;
}
else
{
s++;
}
printf("%d",s);
return 0;
}
