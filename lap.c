#include<stdio.h>
#include<string.h>
int main()
{
char g[100],h[100];
int i;
scanf("%c",&g);
strcpy(h,g);
strrev(g);
i=strcmp(g,h);
if(i==0)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
