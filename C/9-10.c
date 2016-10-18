#include <stdio.h>
int Fibonacci(int num);
int main(int argc, char *argv[])
{
	int num;
	while(getchar!='#')
	{
		printf("Type a positive integer ,i will show you the Fibonacci array.\n");
		scanf("%d",&num);
		while(num<0)
		{
			printf("Type a positive integer ,i will show you the Fibonacci array.\n");
			scanf("%d",&num);
		}
		Fibonacci(num);
		printf("\n");
	}
	return 0;
}
int Fibonacci(int num)
{
	long long int temp1,temp2,now,count;
	temp1=temp2=1;
	printf("%d ",1);
	if (num==1)
		{
			return 0;
		}
	for (count=2;count<=num;count++)
	{
		now=temp1+temp2;
		temp1=temp2;
		temp2=now;
		printf("%ld ",temp1);
	}
	return 0;
}