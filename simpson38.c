#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(1+pow(x,3));
}
int main()
{
	float I,h,c=0,a,b;
	printf("enter the lower and upper limit:");
	scanf("%f%f",&a,&b);
	h=(b-a)/3;
	I=3*h/8*(f(a)+3*f(a+h)+3*f(a+2*h)+f(b));
	printf("the result is: %f",I);
	return 0;
}
