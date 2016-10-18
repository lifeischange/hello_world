#include <stdio.h>
#include <ctype.h>
#define TIME 40
#define OVERTIME 1.5
#define BASE1 300
#define BASE2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define INCOME1 (SALARY*TIME) 
#define TAX1 (BASE1*RATE1)
#define TAX2 (TAX1+((BASE2-BASE1)*RATE2))
int main(int argc, char *argv[])
{
	printf("*****************************************************************\n"); 
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a)$8.75/hr\t\tb)$9.33/hr\t\t\nc)$10.00/hr\t\td)$11.20/hr\t\t\n");
	printf("e)quit\n");
	printf("*****************************************************************\n"); 
	double SALARY;
	float worktime;
	double money,tax,income;
	int choice;
	char ch;
	while(scanf("%d",&choice)!=1)
	{
		ch=getchar();
		ch=tolower(ch);
		switch(ch)
			{
			case 'a':
				SALARY=8.75;
				break;
			case 'b':
				SALARY=9.33;
				break;
			case 'c':
				break;
			case 'd':
				SALARY=11.20;
				break;
			case 'e':
				goto flag;
				break;
			default:
				printf("Please enter a avaliable grade.\n");
			}
			while(getchar()!='\n')
				continue;
		printf("Please enter the time you have work(type # to quit,type x to back last stage.).\n");
	while(scanf("%f",&worktime)==1)
	{
		if (worktime=='#')/*退出机制*/ 
			break;
		if (worktime<0)/*防止不合法输入*/ 
			printf("Please enter avaliable number.\n");
		if (worktime<=TIME)/*不加班情况*/ 
		{
			money=worktime*SALARY;
			if (money<=BASE1)/*收入小于300情况*/ 
				tax=money*RATE1;
			else /*收入大于300情况*，不存在大于450的情况*/ 
				tax=TAX1+((money-BASE1)*RATE2);
		}
		else /*加班情况*/ 
		{
			worktime=TIME+1.5*(worktime-TIME);/*工时数*/ 
			money=worktime*SALARY;
			if (money<=BASE2)/*收入小于450情况*/
				tax=TAX1+((money-BASE1)*RATE2);
			else /*收入大于450情况*/
				tax=TAX2+((money-BASE2)*RATE3);
		}
		income=money-tax;/*不管哪种情况纯收入等于收入减去税费*/
		printf("Your money is %lf$,tax is %lf$,income is %lf$.\n",money,tax,income);
		printf("Please enter next time you have work(type # to quit).\n");
	}
	
	flag:break; 
	}
 	printf("See you again1\n");
	return 0;
}