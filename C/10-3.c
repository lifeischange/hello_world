#include <stdio.h>
int max(int ar[],int m);
int main(int argc, char *argv[])
{
	int answer;
	int m,n,i;
	printf("Let's test it.\n");
	scanf("%d",&m);
	while(m!=99999)
	{
	int array[m];
	printf("Type the parameter in your array.\n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&n);
	array[i]=n;
	}
	answer=max(array,m);
	printf("The max of your array is %d.\n",answer);
	printf("Confirmed the array length:\n");
	scanf("%d",&m);
	}
	return 0;
}
int max(int ar[],int m)
{
	int result,i;
	result=ar[0];
	for(i=0;i<m;i++)
	result=result>ar[i]?result:ar[i];
	return result;
}