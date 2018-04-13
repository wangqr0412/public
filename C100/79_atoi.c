#include <stdio.h>

int my_atoi(char *str)
{
	int num=0;
	while(*str)
	{
		int digital=*str-48;
		num=num*10+digital;
		str++;
	}
	return num;
}

int main(int argc, const char *argv[])
{
	char *str="-1122";
	printf("%d\n",my_atoi(str));
	return 0;
}
