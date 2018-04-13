#include <stdio.h>
#include <string.h>
char *nixu( char *str)
{
	char *p=str;
	char *q=p + strlen(str)-1;
	while(p < q )
	{
		*p^=*q;
		*q^=*p;
		*p^=*q;
		p++;
		q--;
	}
	return str;
}

int main(int argc, const char *argv[])
{
	char str[20]="abcdefgh";
	printf("%s\n",nixu(str));
	return 0;
}
