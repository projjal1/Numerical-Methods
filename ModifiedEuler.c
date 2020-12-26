#include<stdio.h>
float equation(float x,float y)
{
	float z;
	z=(x*x*x)+y;
	return z;
}
void main()
{
	float f,x,y[20],h,n,Y1,Y2,yn;
	int i,m;
	printf("Enter initial value of x:");
	scanf("%f",&x);
	printf("Enter initial value of y:");
	scanf("%f",&y[0]);
	printf("Enter Interval Size:");
	scanf("%f",&h);
	printf("Enter value to be found:");
	scanf("%f",&n);
	m=n/h;
	printf("x		y\n");
	//printf("%f	%f\n",x,y[0]);
	
	for(i=1;i<=m;i++)
	{	
		printf("%f	%f\n",x,y[i-1]);
		yn=y[i-1]+(h*equation(x,y[i-1]));
		do
		{		
		Y1=y[i-1]+(h*(equation(x,y[i-1])+equation(x+h,yn)))/2;
		Y2=y[i-1]+(h*(equation(x,y[i-1])+equation(x+h,Y1)))/2;
		yn=Y2;
		}while((Y1-Y2)<0.01 || (Y2-Y1)<0.01);
		y[i]=Y2;		
		x=x+h;
	}	
	printf("\ny(%f)=%f\n",n,y[m-1]);
}
