#include<stdio.h>
void main()
{
	int h,i,c=0;
	float y[20],x[20],s=0,a,b;
	printf("Enter Lower Limit:");
	scanf("%f",&a);
	printf("Enter Upper Limit:");
	scanf("%f",&b);
	printf("Enter interval size:");
	scanf("%d",&h);
	for(i=a;i<=b;i=i+h)
	{
		x[c++]=i;
	}
	for(i=0;i<c;i++)
	{
		y[i]=(1/(1+x[i]));
	}
	for(i=0;i<(c-1);i++)
	{
		s=s+(y[i]+y[i+1]);
	}
	printf("\n");
	for(i=0;i<c;i++)
	{
		printf("%f	%f	\n",x[i],y[i]);
	}
	printf("\n");
	s=(s*h)/2;
	printf("Answer:%f\n",s);
}
