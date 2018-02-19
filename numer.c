#include<stdlib.h>
#include<string.h>
int main()
{
int f=0,i,l;
char a[100];
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
f++;
}
}
printf("%d",f);
return 0;
}
