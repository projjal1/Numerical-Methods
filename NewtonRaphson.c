#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f(double x)
{
double y;
y=(x*x*x)-8*x-4;
return y;
}
double df(double x)
{
double y;
y=3*x*x-8;
return y;
}
void main()
{
double x0,a,b,h;
int i=0;
printf("enter a limit");
scanf("%lf",&x0);

printf("f(x(n))		f'(x(n))	(f(x(n))/f'(x(n))	x(n+1)\n");

do
{
a=f(x0);
b=df(x0);
h=a/b;
x0=x0-h;
printf("%lf	%lf	%lf	%lf\n",a,b,h,x0);
}
while(fabs(f(x0))>0.0001);
{
printf("Root : %lf\n",x0);
}
}
