#include<stdio.h>
void main()
{
	float arr[10][11],p,m,s,h,x;
	int i,j,n,c=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			arr[i][j]=0;
		}
	}
	printf("Enter number of values for input:");
	scanf("%d",&n);
	printf("Enter values of x and f(x):-\n");
	for(i=0;i<n;i++)
	{
		printf("x:");
		scanf("%f",&arr[i][0]);
		printf("f(x):");
		scanf("%f",&arr[i][1]);
	}
	for(i=1;i<n;i++)
	{
		c++;
		for(j=0;j<n-c;j++)
		{
			arr[j][i+1]=arr[j+1][i]-arr[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%f	",arr[i][j]);
		}
	printf("\n");
	}
	printf("Enter value of x:-");
	scanf("%f",&x);
	h=arr[1][0]-arr[0][0];
	s=(x-arr[n-1][0])/h;
	p=arr[n-1][1];
	for(i=2;i<=n;i++)
	{
			m=arr[n-i][i];
			for(j=1;j<=(i-1);j++)
				m=m*(s+j-1)/j;
			p=p+m;
	}
printf("After NewtonBackward Interpolation:\n");
	printf("Answer=%f\n",p);
}
