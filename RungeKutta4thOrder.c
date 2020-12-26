#include<stdio.h>
float equation(float x,float y)
{
	float z;
	z=x-y;
	return z;
}
void main()
{
 float y,x,h,k,k1,k2,k3,k4,f1,f2,f3,f4,n,m,i;
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
		f2=equation(x+(h/2),y+(k1/2));
		k2=h*f2;
		f3=equation(x+(h/2),y+(k2/2));
		k3=h*f3;
		f4=equation(x+h,y+k3);
		k4=h*f4;		
		k=(k1+(2*k2)+(2*k3)+k4)/6;
		x=x+h;
		y=y+k;
	}	
	printf("\ny(%f)=%f\n",n,y);
}
