#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "Grant"
#define MAX 40
int main(int argc, char *argv[])
{
	char try[MAX];
	char * pt;
	puts("Who is buried in Grant's tomb?");
	pt=try+1;
	gets(try);
	puts(try);
	while(*pt)
	{
		*pt=tolower(*pt);
		pt++;
	}
	*try=toupper(*try);
	puts(try);
	while(strcmp(try,ANSWER)!=0)
	{
		puts("No,that's wrong.Try again!");
		gets(try);
		pt=try+1;
		while(*pt)
	{
		*pt=tolower(*pt);
		pt++;
	}
		*try=toupper(*try);
	}
	puts("That's right!");
	return 0;
}