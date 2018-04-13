#include <stdio.h>

int ChildString(char *p)
{
	char *q=p;
	int stringlen=0,i=0,j=1,len=0,maxlen=1;
	while(*q != '\0')
	{
		stringlen++;
		q++;
	}
	printf("stringlen=%d\n",stringlen);
	while(i < stringlen)
	{
		if(*(p+i)==*(p+j) && j<stringlen)
		{
			len++;
			i++;
			j++;
		}
		else
		{
			if(len >= maxlen)
			{
				maxlen=len+1;
				len=0;
			}
			else
			{
				len=0;
			}
			i++;
			j++;
		}
	}
	return maxlen;
}

int main(int argc, const char *argv[])
{
	char *p="ww";
	int n=ChildString(p);
	printf("%d\n",n);
	return 0;
}
