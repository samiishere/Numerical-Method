#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float A[20][20],x[20],e=0.0001,temp,lambda_new,x_new[20],lambda_old;
  printf("enter the order of matrix:");
  scanf("%d",&n);
  printf("enter the element of augmented matrix:\n");
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=n;j++)
  	{
  		printf("A[%d][%d]=",i,j);
  		scanf("%f", &A[i][j]);
		}
	}
	printf("enter initial guess vector:");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
	}
	lambda_old=1;
	up:
	for(i=1;i<=n;i++)
	{
		temp=0.0;
		for(j=1;j<=n;j++)
		{
			temp=temp+A[i][j]*x[j];
		}
		x_new[i]=temp;
  }
	for(i=1;i<=n;i++)
	{
		x[i]=x_new[i];
	}
	lambda_new=fabs(x[1]);
	for(i=2;i<=n;i++)
	{
		if (fabs(x[i])>lambda_new)
		{
			lambda_new=fabs(x[i]);
		}
	
	}
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]/lambda_new;
	}
	printf("\nlambda_new=%f",lambda_new);
	printf("\neigen vector are \n");
	for(i=1;i<=n;i++)
	{
		printf("\n %f\t",x[i]);
	}
	if (fabs(lambda_new-lambda_old)>e);
	{
		lambda_old=lambda_new;
		goto up;
	}
	return 0;
}
