#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n,i,j,k;
	printf("please input:");
	scanf("%d",&n);
	i=n >> 4;
	printf("%d\n",i);
	j=~(~0 << 4);
	k=i&j;
	printf("%d\n",k);
	return 0;
}
