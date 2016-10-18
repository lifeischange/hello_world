#include <stdio.h>
void to_base_n(int x,int y);
int main(int argc, char *argv[])
{
	int primary,base;
	while(1)
	{printf("Enter the number you want to switch:\n");
	scanf("%d",&primary);
	printf("Enter the base you want to show:\n");
	scanf("%d",&base);
	while(base==0)
	{
		printf("The base can not be 0.Type again:\n");
		scanf("%d",&base);
	}
	printf("\nHi %d in base %d is ",primary,base);
	to_base_n(primary,base);
	}
	return 0;
}
void to_base_n(int x,int y)
{
	char temp[50];
	int ch,num;
	int i=0;
	while(x!=0)
	{
		num=x;
		ch=x%y;
		if (ch>9)
			temp[i]='0'+7+ch;
		else
			temp[i]='0'+ch;
		i++;
		x=x/y;		
	}
	i--;
	while(i>=0)
	{
		putchar(temp[i]);
		i--;
	}
	printf(".\n");
}