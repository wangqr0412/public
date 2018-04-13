#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	FILE *fp;
	int i,j,n;
	char str[128],str1[128],str2[128];
	if((fp=fopen("1.txt","r")) ==NULL)
	{
		perror("open 1.txt faild");
		exit(-1);
	}
	fgets(str1,128,fp);
	fclose(fp);
	if((fp=fopen("2.txt","r"))==NULL)
	{
		perror("open 2.txt faild");
		exit(-1);
	}
	fgets(str2,128,fp);
	strcat(str1,str2);
	strcpy(str,str1);
	fclose(fp);
	n=strlen(str);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				str[j]^=str[j+1];
				str[j+1]^=str[j];
				str[j]^=str[j+1];
			}
		}
	}

	if((fp=fopen("3.txt","w"))==NULL)
	{
		perror("open 3.txt faild");
		exit(-1);
	}
	fputs(str,fp);
	fputs("\n",fp);
	fclose(fp);
	printf("%s\n",str);
	return 0;
}
