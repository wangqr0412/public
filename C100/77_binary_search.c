/*二分查找---又叫折半查找，要查找的前提是检索结果位于已排序的列表中*/

#include <stdio.h>

int binarySearch(int *arr,int key,int len)
{
	int left=0;
	int right=len-1;
	int mid=0;
	while(left <= right)
	{
		mid = (left + right)/2;
		if(arr[mid] > key)
			right=mid-1;
		else if(arr[mid] < key)
			left=mid+1;
		else
			return mid;
	}
	return -1;
}

int main(int argc, const char *argv[])
{
	int t;
	int arr[15]={1,3,4,7,8,10,14,34,44,55,58,60,64,67,76};
	int len=sizeof(arr)/sizeof(arr[0]);
	t=binarySearch(arr,76,len);
	printf("%d\n",t);
	return 0;
}
