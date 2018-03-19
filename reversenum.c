#include <stdio.h>
int main()
{
  int a,t,c=0;
  scanf("%d",&a);
  while(a!=0)
  {
  	t=a%10;
  	c=c*10+t;
  	a/=10;
  }
  printf("%d",c);
	return 0;
}
