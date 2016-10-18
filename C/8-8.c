#include <stdio.h>
#include <ctype.h>
char operation(void);
int excute(float num1,float num2,char wind);
float detector(void);
int main(int argc, char *argv[])
{
	char flag;
	float num1,num2;
	printf("*********************************************************\n");	
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
	while(1)/*无限循环*/
	{
	flag=operation();/*选择算法并采取符号标记，和16行不能颠倒就多算一遍*/
	if(!flag)/*退出接口*/
		{
		printf("Bye!\n");
		return 0;
		}
	printf("Enter the first number:\n");
	num1=detector();/*过滤输入值*/
	printf("Enter the second number:\n");
	num2=detector();/*过滤输入值2，添加不可等于零的选项*/
	while(num2==0 && flag=='d')
		{
		printf("Enter a number other than 0:\n");
		num2=detector();
		}
	excute(num1,num2,flag);/*计算并显示*/
	printf("*********************************************************\n");
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
	}
	return 0;
}
char operation(void)/*选择操作方法*/
{
	char ch;
	int num;
	while(scanf("%d",&num)!=1)
	{
		ch=getchar();
		ch=tolower(ch);
		switch(ch)
		{
			case 'a':
			case 's':
			case 'm':
			case 'd':
				return ch;
			case 'q':
				return 0;
			default:
				printf("Invalid value,Please enter a letter.\n");	
		}
		while(getchar()!='\n')
			continue;
		printf("Enter the operation of your choice:\n");
		printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");	
	}
	printf("%d is an integer.Invalid value.\n",num);
	return operation();
}
float detector(void)
{
	float opnum;
	char temp;/*使用变量防止有些字符不能打印*/
	while(scanf("%f",&opnum)!=1)
	{
		while((temp=getchar())!='\n')
			putchar(temp);
			printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or3:");
		return detector();
	}
	return opnum;
} 
int excute(float num1,float num2,char wind)/*计算过程*/
{
	float answer;
	char title;
	switch(wind)
	{
		case 'a':
			answer= num1+num2;
			title='+';
			break;
		case 'm':
			answer= num1*num2;
			title='*';
			break;
		case 's':
			answer= num1-num2;
			title='-';
			break;
		case 'd':
			answer= num1/num2;
			title='/';
			break;		 
	}
	printf("%.2f%c%.2f=%.2f\n\n",num1,title,num2,answer);
	return 0;
}