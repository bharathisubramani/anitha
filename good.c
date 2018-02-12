#include<stdio.h>
#include<string.h>
int main()
{
int i,l,flag=0;
char a[20];
gets(a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
  flag++;
}
  printf("%d",flag);
  return 0;
}

