#include <stdio.h>
double calculate(double x,double y);
int main(int argc, char *argv[])
{
	double result,num1,num2;
	while(1)
	{
		printf("Game start:\n");
		scanf("%lf%lf",&num1,&num2);
		while (num1==0 || num2==0)
			scanf("%lf%lf",&num1,&num2);
		result=calculate(num1,num2);
		printf("The answer is %lf.\n",result);
	}
	
	return 0;
}
double calculate(double x,double y)
{
	double avg,answer;
	x=1/x;
	y=1/y;
	avg=(x+y)/2;
	if(!avg)
		return 0;
	answer=1/avg;
	return answer;
}
