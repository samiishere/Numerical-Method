#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)+1
int main()
{
	int a,b;
	float I,h;
	printf("enter the lower and upper limit:");
	scanf("%d%d",&a,&b);
	h=b-a;
	I=h/2*(f(a)+f(b));
	printf("the result is:%f",I);
	return 0;
}
