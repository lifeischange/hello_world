#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
int main(int argc, char *argv[])
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i=0;
	printf("Enter %d words beginning with q:\m",LIM);
	while(i<LIM && gets(temp))
	{
		if(temp[0]!='q')
			printf("%s doesn't begin with 1!\n",temp);
		else
		{
			strcpy(qwords[i],temp);
			i++;
		}
	}
	puts("Here are the words accepted: ");
	for(i=0;i<LIM;i++)
		puts(qwords[i]);
	return 0;
}