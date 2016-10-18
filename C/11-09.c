#include <stdio.h>
int strlen(char * ch);
int main(int argc, char *argv[])
{
	char * pc="I love you ,and i want you.";
	printf("%d",strlen(pc));
	return 0;
}
int strlen(char * ch)
{
	int count=0;
	while(*ch)
	{ch++;
	count++;}
	return count;
}