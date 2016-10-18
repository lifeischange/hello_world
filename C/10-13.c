#include <stdio.h>
void input(int m,double ar[][m],int n);
double average(double ar[],int n);
double totalavg(int m,double ar[][m],int n);
double max(int m,double ar[][m],int n);
int main(int argc, char *argv[])
{
	int m,n;
	printf("Comfirmed the length of array.\n");
	while(scanf("%d",&m)!=1)
	scanf("%d",&m);
	printf("Comfirmed the dimonsion of array.\n");
	while(scanf("%d",&n)!=1)
	scanf("%d",&n);
	double array[m][n];
	double answer,result,maximum;
	int i;
	input(n,array,m);
	for (i=0;i<m;i++)
	{
		answer=average(array[i],n);
		printf("The average result of %d line is %lf.\n",i+1,answer);
	}
	result=totalavg(n,array,m);
	printf("The average result of all line is %lf.\n",result);
	maximum=max(n,array,m);
	printf("The maximum of the array %lf.\n",maximum);
	return 0;
}
void input(int m,double ar[][m],int n)
{
	int i,j;
	double num;
	printf("Import the array's parameter.\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d line of availables:\n",i+1);
		for(j=0;j<m;j++)
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
double totalavg(int m,double ar[][m],int n)
{
	double total,avg;
	int i,j;
	total=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		total+=ar[i][j];
	}
	avg=total/(m*n);
	return avg;
}
double max(int m,double ar[][m],int n)
{
	double answer;
	int i,j;
	answer=ar[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		answer=answer>ar[i][j]?answer:ar[i][j];
	}
	return answer;
}