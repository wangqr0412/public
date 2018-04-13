#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i,j,k;
	int num=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j && i!=k && j!=k)
				{
					num++;
					printf("%d ",i*100+j*10+k);
				}
			}
		}
	}
	printf("\n");
	printf("num=%d\n",num);
	return 0;
}
