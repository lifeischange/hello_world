#include <stdio.h>
#include <ctype.h>
void show(char ch);
int main(int argc, char *argv[])
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		if(ch!='\n')
			show(ch);
		else
			printf("\n");
	}
	
	return 0;
}
void show(char ch)
{
	int num;
	if(isalpha(ch))
	{
		ch=toupper(ch);
		num=ch-64;
		printf("%d",num);
	}
	else
	printf("%d",-1);
}