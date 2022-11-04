//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	double volume, r;
//	printf("Please input your radil:");
//	scanf("%lf", &volume);
//	r = 10.0f;
//	volume = 4.0f / 3.0f * 3.14 * r * r * r;
//	printf("volume=%.2f\n", volume);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(suppress : 4996)

//int main()
//{
//	double amount,tax;
//	amount = 0.0;
//	printf("Enter an amount:");
//	scanf("%lf", &amount);
//	tax = amount * 5.0f / 100.0f;
//	printf("\n\nWith tax added:$%lf",tax);
//
//	return 0;
//}

int main()
{
	int x;
	x = 0;
	while(1)
	{
	printf("Input x:");
	scanf("%d",&x);
	/*printf("answer=%d\n",3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6)*/;
	printf("answer=%d\n",-6+x*(7+x*(-1+x*(-5+x*(2+3*x)))));
	}
	return 0;
}