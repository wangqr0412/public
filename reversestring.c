#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char Teststr[] = "I love China";
	int len = strlen(Teststr);
	printf("len = %d\n",len);    //before
	char *head = Teststr;
	char *tail = &Teststr[len-1];
	printf("1-->%s\n",Teststr);
	while(head!=tail && head<tail)
	{
		*head ^= *tail;
		*tail ^= *head;
		*head ^= *tail;
		head++;
		tail--;
		printf("2-->%s\n",Teststr);		//reverse
	}
	printf("3-->%s\n",Teststr);			//after

	return 0;
}
