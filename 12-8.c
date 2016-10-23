#include <stdio.h>
#include <stdlib.h>
int *make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(int argc, char *argv[])
{
	int * pa;
	int size;
	int value;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	while(size>0)
	{
		printf("Enter the initialization value: ");
		scanf("%d",&value);
		pa=make_array(size,value);
		if(pa)
		{
			show_array(pa,size);
			free(pa);
		}
		printf("\nEnter the number of elements(<1 to quit): ");
		scanf("%d",&size);
	}
	scanf("Done.\n");
	return 0;
}
int * make_array(int size,int value)
{
	int *array;
	int j;
	array=malloc(size*sizeof(int));
	for(j=0;j<size;j++)
	{
		array[j]=value;
		if(j<size-1)
			scanf("%d",&value);
	}
	return array;
}
void show_array(const int pa[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if((i+1)%8==0)
		{
			printf("\n");
		}
		printf("pa[%d]:%d  ",i,pa[i]);
	}
}