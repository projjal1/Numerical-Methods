/*
	 x			0			5			12			19
	f(x)		17.1		39.2		52.71		115.72	
For x=14.31 Find f(x) using Lagrange's interpolation
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	float f[10],x[10],l[10],p=0,X;
	int n,i,c=0;
	printf("Enter no of values to be entered:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter x%d:",i);
		scanf("%f",&x[i]);
		printf("Enter f(x%d):",i);
		scanf("%f",&f[i]);	
	}
	printf("Input Value of X:");
	scanf("%f",&X);
	c=0;
	for(i=0;i<n;i++)
		l[i]=1;
	
	
	for(i=0;i<n;i++)
	{
		for(c=0;c<n;c++)
		{
			if(c!=i)
				l[i]=l[i]*((X-x[c])/(x[i]-x[c]));
		}
	}
	for(i=0;i<n;i++)
	{
		l[i]=l[i]*f[i];	
		p=p+l[i];	
	}
printf("Answer:f(%f)=%f\n",X,p);
}
