#include <stdio.h>
void copy(int m,int n,double src[3][5],double tar[][n]);
void show(int m ,int n,double arr[][n]);
int main(int argc, char *argv[])
{
	double src[3][5]={
		{1,2,3,4,5},
		{7,5.8,4.3,4.9,5.7},
		{1.5,2.0,3.2,4.9,5.4},
	};
	int m,n;
	printf("confirmed your array length.\n");
	scanf("%d",&m);
	printf("confirmed your array dimension.\n");
	scanf("%d",&n);
	double tar[m][n];
	copy(m,n,src,tar);
	show(3,5,src);
	show(m,n,tar);	
	return 0;
}
void copy(int m,int n,double src[3][5],double tar[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			*(*(tar+i)+j)=*(*(src+i)+j);
	}
}
void show(int m ,int n,double arr[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%lf\t",arr[i][j]);
			printf("\n");
	}
}