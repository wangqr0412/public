#include <stdio.h>

void BubbleSort(int arr[],int n)
{
	int i,j;
	int flag=1;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]>arr[j])
			{
				arr[j]^=arr[j+1];
				arr[j+1]^=arr[j];
				arr[j]^=arr[j+1];
				flag=1;
			}
		}
		if(!flag)
			continue;
	}	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(int argc, const char *argv[])
{
	int arr[]={3,123,11,452,23};
	BubbleSort(arr,5);
	return 0;
}
