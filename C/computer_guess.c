#include <stdio.h>
#include <ctype.h>
int on_off(void);
int filter(void);
int set(void);
int user(int upper,int lower);
int main(void)
{
	int digit,upper,lower;
	upper=100;
	lower=0;
	for (digit=0;digit<60;digit++)
		printf("*");
	printf("\nThis is a small game.You set a number and i will guess it.\nIf i guess it you should kiss me,haha.");
	printf("Let's go?\nEnter your choice:(Y/N)\n");/*程序入口*/ 
	if(!on_off())
		{
		printf("See you next time!\n");
		return 0;
		}
	printf("The upper is %d,the lower is %d.\n",upper,lower);
	printf("Do you want to set the limits?(Y/N)\n");/*设置上下限*/
	if(on_off())
		{
			printf("There are 4 action you can choose,original limits is upper=100,lower-0.\n");
			printf("1)Set both of the limits;\t2)Only set the upper;\n");
			printf("3)Set the lower;\t\t4)Cancel,retain the original set.\n");
			upper,lower=set();
		} 
		user(upper,lower);
	
	return 0;
}
int on_off(void)/*选择器*/
{
	char ch;
	while((ch=getchar())!='EOF')
		{
		filter();
		ch=toupper(ch);
		switch(ch)
		{
			case 'Y':
		 		return 1;
		 	case 'N':
		  		return 0;
 		 	default:
 		 		 printf("Please enter a avaliable value.\n");	
		}
		}
}
int filter(void)/*过滤器*/
{
	while(getchar()!='\n')
		continue;
	return 0;
}
int detector(void)/*检测器*/
{
	int num;
	char ch;
	while(scanf("%d",&num)!=1)
	{
		while((ch=getchar())!='\n');
			putchar(ch);
	  	printf("is not a integer.\nPlease enter an avaliable value.\n");
		filter(); 
	}
	return num;
}
int set(void)/*设置上下限*/
{
	int path,lower,upper,temp;
	lower=0;
	upper=100;
 	path=detector();
	switch(path)
	{
		case 1:
			printf("Enter the upper limit:\n");
			upper=detector();
			printf("Enter the lower limit:\n");
			lower=detector();
			while(upper<=lower)
			{
				printf("Upper is lower than lower.\n");
				printf("Do you want to continue?(Y/N)\n");
				if(on_off())
					{
						temp=upper;
						upper=lower;
						lower=temp;
					}
				else
				{
				printf("Enter the upper limit:\n");
				upper=detector();
				printf("Enter the lower limit:\n");
				lower=detector();
				}
			}
			printf("The upper is %d,the lower is %d.",upper,lower);
			break;
		case 2:
			printf("Enter the upper limit:\n");
			upper=detector();
			while(upper<=lower)
			{
				printf("Upper is lower than lower.\n");
				printf("Do you want to continue?(Y/N)\n");
				if(on_off())
					{
						temp=upper;
						upper=lower;
						lower=temp;
					}
				else
				{
				printf("Enter the upper limit:\n");
				upper=detector();
				printf("Enter the lower limit:\n");
				lower=detector();
				}
			}
			printf("The upper is %d,the lower is %d.",upper,lower);
			break;
		case 3:
			printf("Enter the lower limit:\n");
			lower=detector();
			while(upper<=lower)
			{
				printf("Upper is lower than lower.Please enter again.\n");
				printf("Do you want to continue?(Y/N)\n");
				if(on_off())
					{
						temp=upper;
						upper=lower;
						lower=temp;
					}
				else
				{
				printf("Enter the upper limit:\n");
				upper=detector();
				printf("Enter the lower limit:\n");
				lower=detector();
				}
			}
			printf("The upper is %d,the lower is %d.",upper,lower);
			break;
		case 4:
			printf("The upper is %d,the lower is %d.",upper,lower);
			break;
		default:
			printf("Please type the avaliable value.\nSuch as 1,2,3,4.\n");
	}	
	 return upper,lower;	 	
}
int user(int upper,int lower)
{
	int num,answer;
	printf("Don't enter a number is lower than lower and upper than upper.\n");
	num=detector();
	filter();
	while(num>upper || num<lower)
	{
		printf("Avaliable value.printf N to quit.");
		num=detector();
		filter();
	}
	answer=(lower+upper)/2;
	while(answer!=num)
	{
		printf("I guess the answer is %d.",answer);
		printf("Am i right?(Y/N)\n");
		if(!on_off())
			{
			printf("It is bigger?(Y/N)\n");
				if(on_off())
					upper=answer;
				else
					lower=answer;
			}
		answer=(lower+upper)/2;
	}
	printf("Oh i got it.It's %d.\n",answer);
	printf("Kiss me baby.\n");
	return 0;
}