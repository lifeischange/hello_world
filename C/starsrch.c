#include <stdio.h>
#include <string.h>
#define LISTSIZE 5
int main(int argc, char *argv[])
{
	char * list[LISTSIZE]={
		"astronomy","astounding",
		"astrophysics","ostracize",
		"asterism"
	};
	int count=0;
	int i;
	for(i=0;i<LISTSIZE;i++)
	{
		if(strncmp(list[i],"astro",4)==0)
		{
			printf("Found:%s\n",list[i]);
			count++;
		}
	}
	printf("The list contained %d words beginning"
			"with astro.\n",count);
	return 0;
}