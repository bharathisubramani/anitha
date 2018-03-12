#include<stdio.h>
int main()
{
int n,m,p=1;
scanf("%d",&n);
while(n!=0)
{
m=n%10;
p=p*m;
n/=10;
}
printf("%d",p);
return 0;
}
