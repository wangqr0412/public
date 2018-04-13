#include <stdio.h>

void output(long b,long i)
{
	printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i);
}
int main(int argc, const char *argv[])
{
	long int a,b,i;
	a=809;
	for(i=10;i<100;i++)
	{
		b=i*a+1;
		if(b>=1000&& b<=10000&&8*i<100 && 9*i>=100)
			output(b,i);
	}
	return 0;
}
