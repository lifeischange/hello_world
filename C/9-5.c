#include <stdio.h>
void recode(double * big,double * small);
int main(int argc, char *argv[])
{
	double small,big;
	while(1)
	{
		printf("Enter two numbers,and i will recode them with the bigger one.\n");
		scanf("%lf%lf",&small,&big);
		printf("The bigger is %lf:%p and the smaller is %lf:%p.\n",(big>small?big:small),&big,(big<=small?big:small),&small);
		recode(&small,&big);
		printf("The bigger is %lf:%p and the smaller is %lf:%p.\n",big,&big,small,&small);
	}
	return 0;
}
void recode(double * big,double * small)
{
	*big>*small?(*small=*big):(*big=*small);
}