#include<stdio.h>
float equation(float x,float y)
{
	float z;
	z=x-y;
	return z;
}
void main()
{
 float y,x,h,k,k1,k2,f1,f2,n,m,i;
	printf("Enter initial value of x:");
	scanf("%f",&x);
	printf("Enter initial value of y:");
	scanf("%f",&y);
	printf("Enter Interval Size:");
	scanf("%f",&h);
	printf("Enter value to be found:");
	scanf("%f",&n);
	m=n/h;
	for(i=1;i<=m;i++)
	{
		f1=equation(x,y);
		k1=h*f1;
		f2=equation(x+h,y+k1);
		k2=h*f2;
		k=(k1+k2)/2;
		x=x+h;
		y=y+k;
	}	
	printf("\ny(%f)=%f\n",n,y);
}
