#include <stdio.h>
int date[2]={100,200};
int moredate[2]={300,400};
int main(int argc, char *argv[])
{
	int * p1,*p2,* p3,v;
	p1=p2=date;
	p3=moredate;
	v=1;
	printf("    p1=%d,    p2=%d,    p3=%d\n",*p1,*p2,*p3);
	printf("    p1=%d,    p2=%d,    p3=%d\n",*p1++,*++p2,++(*p3));
	printf("    p1=%d,    p2=%d,    p3=%d\n",*p1,*p2,*p3);
	return 0;
}