#include <stdio.h>

int search(char *str,int n,char ch)
{
	int i;
	for(i=0;i<n && *(str+i)!=ch;i++);
	return i;
}

int main(int argc, const char *argv[])
{
	char *str="wqrdouyu";
	printf("%d\n",search(str,14,'w'));
	return 0;
}
