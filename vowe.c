#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,l,c=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))||((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')))
{
  c++;
}
}
  if(c!=0)
  {
printf("yes");
}
else
{
printf("no");
}
return 0;
}
