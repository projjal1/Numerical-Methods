#include<stdio.h>
float equation(float x,float y)
{
	float z;
	z=(x*x*x)+y;
	return z;
}
void main()
{
	float f,x,y,h,m,n,i;
	printf("Enter initial value of x:");
	scanf("%f",&x);
	printf("Enter initial value of y:");
	scanf("%f",&y);
	printf("Enter Interval Size:");
	scanf("%f",&h);
	printf("Enter value to be found:");
	scanf("%f",&n);
	m=n/h;
	printf("x		y\n");
	for(i=1;i<=m;i++)
	{	
		printf("%f	%f\n",x,y);
		f=equation(x,y);
		y=y+(f*h);
		x=x+h;
	}	
	printf("\ny(%f)=%f\n",n,y);
}
