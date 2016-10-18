#include <stdio.h>
void input(double ar[][5],int n);
double average(double ar[],int n);
double totalavg(double ar[][5],int n);
double max(double ar[][5],int n);
int main(int argc, char *argv[])
{
	double array[3][5];
	double answer,result,maximum;
	int i;
	input(array,3);
	for (i=0;i<3;i++)
	{
		answer=average(array[i],5);
		printf("The average result of %d line is %lf.\n",i+1,answer);
	}
	result=totalavg(array,3);
	printf("The average result of all line is %lf.\n",result);
	maximum=max(array,3);
	printf("The maximum of the array %lf.\n",maximum);
	return 0;
}
void input(double ar[][5],int n)
{
	int i,j;
	double num;
	printf("Import the array's parameter.\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d line of availables:\n",i+1);
		for(j=0;j<5;j++)
		{
			while(scanf("%lf",&num)!=1)
			scanf("%lf",&num);		
			ar[i][j]=num;
		}
	}
}
double average(double ar[],int n)
{
	double total=0;
	double answer;
	int i;
	for(i=0;i<n;i++)
	{
		total+=*(ar+i);
	}
	answer=total/n;
	return answer;
}
double totalavg(double ar[][5],int n)
{
	double total,avg;
	int i,j;
	total=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		total+=ar[i][j];
	}
	avg=total/(5*n);
	return avg;
}
double max(double ar[][5],int n)
{
	double answer;
	int i,j;
	answer=ar[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		answer=answer>ar[i][j]?answer:ar[i][j];
	}
	return answer;
}