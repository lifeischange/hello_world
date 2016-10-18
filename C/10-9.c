#include <stdio.h>
void add(int n,double src1[][],double src2[][],double tar[][n],int m);
int main(int argc, char *argv[])
{
	int m,n,i,j;
	printf("Initialized the array and give the parameter.\n");
	scanf("%d%d",&m,&n);
	double src1[m][n],src2[m][n],tar[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				src1[i][j]=i+1;
				src2[i][j]=i+j+1;
			}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
			printf("%lf\t",src1[i][j]);
			}
			printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
			printf("%lf\t",src2[i][j]);
			}
			printf("\n");
	}
	add(n,src1,src2,tar,m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
			printf("%lf\t",tar[i][j]);
			}
			printf("\n");
	}
	return 0;
}
void add(int n,double src1[][n],double src2[][n],double tar[][n],int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
			*(*(tar+i)+j)=src1[i][j]+src2[i][j];
			}
	}
}