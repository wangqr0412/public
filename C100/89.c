#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[2][3]={{1,3,5},{2,4,6}};
	int b[3][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("a[%d][%d] = %d ",i,j,b[i][j]);
	}
	printf("\n");
	return 0;
}