#include <stdio.h>
void show(double ar[][5],int n);
void dbkill(double ar[][5],double tar[][5],int n);
int main(int argc, char *argv[])
{
	double tar[3][5];
	double array[3][5]=
	{
		{1.2,2.5,6.5,8.9,7.2},
		{2.2,1.5,6.2,2.9,7.8},
		{5.2,2.7,6.9,3.9,4.2},
	};
	show(array,3);
	dbkill(array,tar,3);
	show(tar,3);
	return 0;
}
void show(double ar[][5],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		printf("%lf",ar[i][j]);
		printf("\n");
	}
}
void dbkill(double ar[][5],double tar[][5],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		tar[i][j]=ar[i][j]*2;
	}
}