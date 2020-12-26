#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k;
	float x[10],u,s=0,a[10][10];
	printf("Enter number of equations:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Equation %d\n",i+1);
		for(j=0;j<n+1;j++)
		{
			if(j!=n)
				printf("Enter co-efficient of x%d:",j+1);
			else
				printf("Enter constant:");
			scanf("%f",&a[i][j]);		 
		}
	}
	printf("The given equations are:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			if(j!=n)
				printf("+ (%f) X%d ",a[i][j],j+1);
			else
				printf(" = (%f)",a[i][j]); 
		}
		printf("\n");
	}
	for(k=0;k<n-1;k++)
	{
		if(a[k][k]==0)
			exit(0);
		for(i=k+1;i<n;i++)
		{
			u=a[i][k]/a[k][k];
			for(j=k;j<n+1;j++)
			{
				a[i][j]=a[i][j]-(u*a[k][j]);
			}	
		}
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		s=0;
		for(j=i+1;j<n;j++)
		{
			s=s+(a[i][j]*x[j]);
		}
		x[i]=(a[i][n]-s)/a[i][i];
	}
	for(i=0;i<n;i++)
		printf("x%d = %f\n",i+1,x[i]);
}
