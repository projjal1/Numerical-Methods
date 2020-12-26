#include<stdio.h>
void main()
{
	int i,c=0,n=0;
	float y[20],x[20],s=0,a,b,h,z,sum,odd=0,even=0;
	printf("Enter Lower Limit:");
	scanf("%f",&a);
	printf("Enter Upper Limit:");
	scanf("%f",&b);
	printf("Enter interval size:");
	scanf("%f",&h);
	n=(b-a)/h;
	for(i=0;i<=(n+1);i++)
	{
		z=a+(i*h);
		x[i]=z;
	}
	for(i=0;i<=(n+1);i++)
	{
		y[i]=(x[i]+(1/x[i]));
	}
	s=y[0]+y[n+1];
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		odd=odd+y[i];
		else
		even=even+y[i];
	}
	printf("\n");
	for(i=0;i<=(n+1);i++)
	{
		printf("%f	%f	\n",x[i],y[i]);
	}
	printf("\n");
	sum=((s+(4*odd)+(2*even))*h)/3;
	printf("Answer:%f\n",sum);
}
