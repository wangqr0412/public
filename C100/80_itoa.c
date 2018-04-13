#include <stdio.h>

void my_itoa(int num,char *str)
{
	char arr[100];
	int i,j;
	for(i=0;i<100;i++)
	{
		arr[i]=num%10+48;
		num/=10;
		if(num<10)
		{
			i++;
			arr[i]=num+48;
			break;
		}
	}

	for(j=0;j<=i;j++)
	{
		str[j]=arr[i-j];
	}
	str[j]='\0';
}

int main(int argc, const char *argv[])
{
	char str[100];
	my_itoa(1235,str);
	printf("%s\n",str);
	return 0;
}
