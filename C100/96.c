#include <stdio.h>

int len(char *str)
{
	int num;
	while(*str)
	{
		num++;
		str++;
	}
	return num;
}

int main(int argc, const char *argv[])
{
	char str[128];
	int i;
	printf("Please input:");
	gets(str);
	i=len(str);
	printf("%d\n",i);
	return 0;
}
