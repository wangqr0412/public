#include <stdio.h>

int main(int argc, const char *argv[])
{
	union
	{
		int a;
		char b;
	}Node;
	Node.a = 0x11223344;
	printf("%#x\n",Node.b);
	if(Node.b == 0x44)
		printf("little end \n");
	else
		printf("big end \n");
	return 0;
}
