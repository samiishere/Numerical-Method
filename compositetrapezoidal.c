#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(1+pow(x,3));
}
int main()
{
	int n,i;
	float I,h,c=0,a,b;
	printf("enter the lower and upper limit:");
	scanf("%f%f",&a,&b);
	printf("enter the number of strip:");
	scanf("%d",&n);
	h=(b-a)/n;
	for (i=1;i<=n-1;i++)
	{
	  c=c+f(a+i*h);
	  I=h/2*(f(a)+f(b)+2*c);
	}
	printf("the result is: %f",I);
	return 0;
}
