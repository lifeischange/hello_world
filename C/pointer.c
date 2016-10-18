#include <stdio.h>
int main(int argc, char *argv[])
{
	int i[2][3]={1,2,3,4,5,6};
	int j[3]={1,2,3};
	int * ptr;
	int * ptd;
	//printf("%p\t%p\t%p:",&ptr,ptr,*ptr);
	//printf("\n%p\t%p\t%p:",i,*(*(i+1)+1),ptd);
	printf("\n%p\t%d\n.",*(ptr+1),sizeof(i[0]));
	return 0;
}