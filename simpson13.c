#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(1+pow(x,3));
}
int main()
{
	float I,h,a,b;
	printf("enter the lower and upper limit:");
	scanf("%f %f",&a,&b);
	h=(b-a)/2;
	I=h/3*(f(a)+4*f((a+b)/2)+f(b));
	printf("the result is: %f",I);
	return 0;
}
