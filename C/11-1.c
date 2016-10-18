#include <stdio.h>
#include <ctype.h>
#define SIZE 4
void input(char *ch);
int main(int argc,char *argv[])
{
	char store[SIZE];
	input(store);
	return 0;
}
void input(char *ch)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		
	*(ch+i)=getchar();
	if(isspace(*(ch+i)))
	break;
	}
	*(ch+i)='\0';
	puts(ch);
}