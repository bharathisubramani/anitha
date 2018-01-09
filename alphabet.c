#include<stdio.h>
int main()
{
char c;
sacnf("%s",&c);
if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
{
printf("is an alphabet");
}
else
{
printf("is not a alphabet");
}
return 0;
}
