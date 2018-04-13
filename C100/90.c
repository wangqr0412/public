#include <stdio.h>

int main(int argc, const char *argv[])
{
	char string[128];
	int i,count=0,flag=0;
	char c;
	gets(string);
	for(i=0;(c=string[i]) != '\0';i++)
	{
		if(c == ' ')
			flag=0;
	
		else if(flag == 0)
		{
			flag=1;
			count++;
		}
	}
	printf("count =%d\n",count);
	return 0;
}
