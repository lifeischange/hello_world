#include <stdio.h>
void compare(int num1,int num2);
int main(int argc, char *argv[])
{
	int num1,num2;
	while(getchar()!='#')
	{
	scanf("%d%d",&num1,&num2);
	compare(num1,num2);
	}
	return 0;
}
void compare(int num1,int num2)
{
	printf("%d",num1>num2?num1:num2);
}