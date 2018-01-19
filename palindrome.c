#include<stdio.h>
int main()
{
int t,a,s=0;
while(a!=0)
{
s=s*10;
s=s+a%10;
a=a/10;
}
s=t;
if(a==t)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
