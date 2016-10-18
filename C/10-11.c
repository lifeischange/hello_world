#include <stdio.h>
#define MONTHS 12
#define YEARS 5
float calculate(int n,float rain[][n],int m);
void calculate2(int n,float rain[][n],int m);
int main(int argc, char *argv[])
{
	const float rain[YEARS][MONTHS]={
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
	};
	float total;
	printf("YEAR RAINFALL (inches)\n");
	total=calculate(MONTHS,rain,YEARS);
	printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
	printf(" Nov Dec\n");
	calculate2(MONTHS,rain,YEARS);
	printf("\n");
	return 0;
}
float calculate(int n,float rain[][n],int m)
{
	int month,year;
	float subtot,total;
	for(year=0,total=0;year<m;year++)
	{
		
		for(month=0,subtot=0;month<n;month++)
			subtot+=*(rain[year]+month);//printf("%p\t",&rain[year][month]);//
		//printf("\n");
		printf("%5d %15.1f\n",2000+year,subtot); 
		total+=subtot;
	}
	return total;
}
void calculate2(int n,float rain[][n],int m)
{
	float subtot;
	int month,year;
	for(month=0;month<n;month++)
		{
			for(year=0,subtot=0;year<m;year++)
				subtot+=*((*rain+year)+month);
				printf("%4.1f",subtot/m);
				
		}
}