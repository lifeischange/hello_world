#include <stdio.h>
void critic(int *n);
int main(int argc, char *argv[])
{
	static int units;
	printf("How many pounds to a firkin of buffer ?\n");
	scanf("%d",&units);
	while(units!=56)
		critic(&units);
	printf("You must have looked it up!\n");
	return 0;
}
void critic(int *n)
{
	printf("No luck,chummy.Try again!\n");
	scanf("%d",n);
}