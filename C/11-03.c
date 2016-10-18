#include <stdio.h>
#include <ctype.h>
#define SIZE 60
char *test(char * word);
int main(int argc, char *argv[])
{
	char word [SIZE];
	char * answer;
	gets(word);
	answer=test(word);
	puts(answer);
	return 0;
}
char *test(char *word)
{
	int i; 
	char * pt;
	i=0;
	pt=word;
	while(isspace(*(word+i)))
	{
	i++;
	}
	word=word+i;
	i=0;
	while(!isspace(*(word+i)))
	{
		i++;
	}
	*(word+i)='\0';
	return word;
}