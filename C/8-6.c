#include <stdio.h>
int main(void)
{
	int ch;
	if(scanf("%d",&ch)!=1)
	{
		ch=getchar();
		putchar(ch);
		printf("\n");
	while(getchar()!='\n')
		continue;	
	}
	printf("%d\n",ch);
	return 0;
}