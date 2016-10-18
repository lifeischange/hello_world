#include <stdio.h>
double power(double num,int n);
int main(int argc, char *argv[])
{
	double num,answer;
	int n;
	while(1)
	{
		printf("Type the number you want to calculate.\n");
		scanf("%lf",&num);
		printf("Type the power.\n");
		scanf("%d",&n);
		answer=power(num,n);
		printf("The answer is %lf.\n",answer);
	}
	return 0;
}
double power(double num,int n)
{
	double product=1;
	int count;
	if(0==n)
		return 1;
	if(num==0)
		return 0;
	else
		{
		for(count=1;count!=n;(count<n)?count++:count--)
			product*=num;
		}
	return n<0?1/product:product;
}