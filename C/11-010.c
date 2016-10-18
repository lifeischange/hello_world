#include <stdio.h>
char *pt(char * pr);
int main(int argc,char *argv[])
{
	char * ch="luluI love you but i can't afford you.";
	char * answer;
	answer=pt(ch);
	printf("%p %p\n",ch,answer);
	return 0;
}
char *pt(char * pr)
{
	while(*pr!=' ')
	{
		pr++;
	}
	return pr;
}