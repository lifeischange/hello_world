#include <stdio.h>
void show(char ch,int row,int column);
int main(int argc, char *argv[])
{
	char ch;
	int column,row;
	while(1)
	{
		printf("Enter the letter you like:\n");
		scanf("%c",&ch);
		printf("Enter the columns:\n");
		scanf("%d",&column);
		printf("Enter the rows:\n");
		scanf("%d",&row);
		show(ch,row,column);	
	}
	return 0;
}
void show(char ch,int row,int column)
{
	int start,count;
	for(start=0;start<=column;start++)
	{
		for(count=0;count<=row;count++)
			printf("%c",ch);
		printf("\n");
	}
}