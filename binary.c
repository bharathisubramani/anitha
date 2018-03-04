#include<stdio.h>
int main()
{
char a[100];
int i,f=0;
scanf("%s",&a);
for(i=0;a[i]]!=NULL;i++)
{
if(a[i]=='0'||a[i]=='1')
{
f=1;
}
else
f=0;
}
if(f==1)
printf("yes");
else
printf("no");
return 0;
}
