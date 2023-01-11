#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(1+pow(x,3));
}
int main()
{
	int n,i;
	float I,h,c=0,a,b,sumx=0,sumy=0;
	printf("enter the lower and upper limit:");
	scanf("%f%f",&a,&b);
	printf("enter the number of strip:");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=1;i<=n-1;i++)
	{
	if(i%3==0)
	{
		sumx=sumx+f(a+i*h);
	}
	else
	{
		sumy=sumy+f(a+i*h);
	}
}
	I=3*h/8*(f(a)+(3*sumy)+(2*sumx)+f(b));
	printf("the result is: %f",I);
	return 0;
}
