#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 100
#define STOP "quit"
int main(int argc, char *argv[])
{
	char input[LIM][SIZE];
	int ct=0;
	printf("Enter up to %d lines (type quit to quit):\n",LIM);
	while(ct<LIM && gets(input[ct]) != NULL && strcmp(input[ct],STOP)!=0)
	ct++;
	printf("%d striings entered\n",ct);
	return 0;
}