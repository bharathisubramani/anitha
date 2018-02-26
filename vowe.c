#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
gets(a);
l=strlen(a)
for(i=0;i<l;i++)
{
if(((a[i]=='a')&&(a[i]=='e')&&(a[i]=='i')&&(a[i]=='o')&&(a[i]=='u'))||((a[i]=='A')&&(a[i]=='E')&&(a[i]=='I')&&(a[i]=='O')&&(a[i]=='U')))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
