#include <stdio.h>
void copy(double src[],double tar[],int index,int num);
int main(int argc, char *argv[])
{
	int m,i,n,index;
	printf("Enter the array length you want to product:\n");
	scanf("%d",&m);
	printf("Enter the slice you want to copy:\n");
	scanf("%d",&n);
	printf("Enter the start point you want to copy:\n");
	scanf("%d",&index);
	double array[m];
	double tar[n];
	for(i=0;i<m;i++)
	{
		array[i]=i+1;
	}
	copy(array,tar,index,n);
	for(i=0;i<n;i++)
	{
		printf("The target array is %lf:\n",tar[i]);
	}
	printf("\n");
	return 0;
}
void copy(double src[],double tar[],int index,int num)
{
	int i=0;
	for(i;i<num;i++)
	*(tar+i)=*(src+index+i);
}