#include <stdio.h>
int main(void)
{
	char str[20],substr[20];
	int i,j,k,number=0;
	printf("请输入母串str：");
	gets(str);
	printf("请输入子串substr：");
	gets(substr);
	for(i=0;str[i]!='\0';i++)//从母串开始遍历
	{
		for(j=i,k=0;str[j]==substr[k];j++,k++)//我们每次遍历的当前的一个母串
			 							//的字符都要和子串的第一个字符开始比较，
											//如果把子串遍历完后就出现次数加一
		{
			if(substr[k+1]=='\0')
				number++;
		}
	}
	printf("substr在str出现的次数为%d\n",number);
	return 0;
}
