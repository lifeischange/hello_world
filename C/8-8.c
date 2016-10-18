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
	while(1)/*����ѭ��*/
	{
	flag=operation();/*ѡ���㷨����ȡ���ű�ǣ���16�в��ܵߵ��Ͷ���һ��*/
	if(!flag)/*�˳��ӿ�*/
		{
		printf("Bye!\n");
		return 0;
		}
	printf("Enter the first number:\n");
	num1=detector();/*��������ֵ*/
	printf("Enter the second number:\n");
	num2=detector();/*��������ֵ2����Ӳ��ɵ������ѡ��*/
	while(num2==0 && flag=='d')
		{
		printf("Enter a number other than 0:\n");
		num2=detector();
		}
	excute(num1,num2,flag);/*���㲢��ʾ*/
	printf("*********************************************************\n");
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
	}
	return 0;
}
char operation(void)/*ѡ���������*/
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
	char temp;/*ʹ�ñ�����ֹ��Щ�ַ����ܴ�ӡ*/
	while(scanf("%f",&opnum)!=1)
	{
		while((temp=getchar())!='\n')
			putchar(temp);
			printf(" is not a number.\nPlease enter a number,such as 2.5,-1.78E8,or3:");
		return detector();
	}
	return opnum;
} 
int excute(float num1,float num2,char wind)/*�������*/
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