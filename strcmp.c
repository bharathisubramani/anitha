#include<stdio.h>
#include<string.h>
int main()
{
int a,b;
char s[10],h[10];
scanf("%s%s",&s,&h);
a=strlen(s);
b=strlen(h);
if(a>b)
{
printf("%s",s);
}
else if(a<b)
{
printf("%s",h);
}
else
{
printf("%s",s);
}
return 0;
}
