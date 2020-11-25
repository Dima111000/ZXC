#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double S,a,x,e;
	printf("Input x: ");
	scanf("%lf", &x);
	printf("Input e: ");
	scanf("%lf", &e);
	for (n=3, S=a=1; fabs(a)>e; n+=2)
	{
		a*=(x*x)/(n*(n-1)*(n-2));
		S += a;
	}
	printf("%lf", S);
}
