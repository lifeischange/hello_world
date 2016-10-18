#include <stdio.h>
#define SIZE 80
char * strsch(char * ch,char asc);
int main(int argc, char *argv[])
{
	char string[SIZE];
	char ch;
	char *rec;
	puts("Enter the string :");
	while(gets(string) && string[0]!='\0')
	{
		puts("Type the letter to search:");
		ch=getchar();
		rec=strsch(string,ch);
		puts(rec);
		puts("Enter the string :");
		gets(string);
	}
	return 0;
}
char * strsch(char * ch,char asc)
{
	int i=0;
	while(*(ch+i)!=asc && *(ch+i)!=0) 
	{
		i++;
	}
	if(*(ch+i)==0) 
		return NULL;
	return ch+i;
}