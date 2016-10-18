#include <stdio.h>
void copy1(double ar[],double tar[],int n);
void copy1(double ar[],double tar[],int n);
int main(int argc, char *argv[])
{
	int i;
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	copy1(source,target1,5);
	copy1(source,target2,5);
	for(i=0;i<5;i++)
	{
		printf("%f\t%f\n",target1[i],target2[i]);
		//printf("%f\t%f",source[i],target2[i]);
	}
	printf("\n");
	return 0;
}
void copy1(double ar[],double tar[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		tar[i]=ar[i];
	}
}
void copy2(double ar[],double tar[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(tar+i)=*(ar+i);
	}
}