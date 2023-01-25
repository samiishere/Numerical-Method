#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	float A[20][20],x[20],ratio;
  printf("enter the order of matrix:");
  scanf("%d",&n);
  printf("enter the element of augmented matrix:\n");
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n+1;j++)
  	{
  		printf("A[%d][%d]=",i,j);
  		scanf("%f", &A[i][j]);
		}
	}
	for(i=1;i<=n-1;i++)
	{
		if(A[i][i]==0)
		{
			printf("mathematical error!");
		}
		for(j=i+1;j<=n;j++)
		{
			ratio=A[j][i]/A[i][i];
			for(k=1;k<=n+1;k++)
			{
				A[j][k]=A[j][k]-(ratio*A[i][k]);
			}
		}
	}
	x[n]=A[n][n+1]/A[n][n];
	for(i=n-1;i>=1;i--)
	{
		x[i]=A[i][n+1];
		for(j=i+1;j<=n;j++)
		{
			x[i]=x[i]-A[i][j]*x[j];
		}
		x[i]=x[i]/A[i][i];
	}
	printf("\nsolution:\n");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=%f\n",i,x[i]);
	
	}
	return 0;
}
