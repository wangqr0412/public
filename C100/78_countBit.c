#include <stdio.h>

unsigned int countbit(char c)
{
	unsigned int num=0;
	while(c)
	{
		c &=(c-1);
		num++;
	}
	return num;
}

int main(int argc, const char *argv[])
{
	char c;
	unsigned int num;
	printf("please input a char:");
	scanf("%c",&c);
	num = countbit(c);
	printf("%d\n",num);
	return 0;
}
