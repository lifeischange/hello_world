#include <stdio.h>
int alter(int * x,int * y);
int main(int argc, char *argv[])
{
	int x,y;
	int num1,num2,num3,m;
	scanf("%d\t%d",&x,&y);
	scanf("%d\t%d\t%d",num1,num2,num3);
	printf("%p\t%p\n",&x,&y);
	x,y=alter(&x,&y);
	printf("%d\t%d\n",x,y);
	printf("%p\t%p\n",&x,&y);
	return (m=((num1>num2)?num1:num2)>num3)?m:num3;
}
int alter(int * x,int * y)
{
	int temp;
	temp=(*x - *y);
	*y=*x + *y;
	*x=temp;
	return *x,*y;
}