#include<stdio.h>
int main()
{
float l,w,h,t,v;
scanf("%f%f%f",&l,&w,&h);
t=2*l*w+2*w*h+2*h*l;
v=l*w*h;
printf("%f\n",t);
printf("%f",v);
return 0;
}
