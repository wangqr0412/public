#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[4];
	int i,n;
	scanf("%d",&n);
	a[0]=n%10;
	a[1]=n%100/10;
	a[2]=n%1000/100;
	a[3]=n/1000;
	for(i=0;i<=3;i++)
	{
		a[i]+=5;
		a[i]%=10;
	}
	for(i=0;i<2;i++)
	{
		a[i]^=a[3-i];
		a[3-i]^=a[i];
		a[i]^=a[3-i];
	}
	for(i=3;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
