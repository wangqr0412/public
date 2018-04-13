#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a=1;
	char *p = (char *)&a;
	if(*p)
		printf("little\n");
	else
		printf("big \n");
	return 0;
}
