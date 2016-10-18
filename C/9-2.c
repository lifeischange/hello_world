#include <stdio.h>
void show(char ch,int i,int j);
int main(int argc, char *argv[])
{
	char ch;
	int i,j;
	while(1)
	{
		printf("Enter the letter you like,\nEnter the start column,\nEnter the end column.\n");
		scanf("%c%d%d",&ch,&i,&j);
		show(ch,i,j);
		printf("\n");
	}
	return 0;
}
void show(char ch,int i,int j)
{
	int col=0;
	for(col;col<j;col++)
	{
		if(col<i)
			printf("%c",' ');
		else
			printf("%c",ch);
	}
}