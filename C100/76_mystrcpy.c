#include <stdio.h>
#include <assert.h>
#include <string.h>
char *mystrcpy(char *strDest,const char *strSrc)
{
	char *address=strDest;
	assert(strDest != NULL && strSrc != NULL);   //如果其值为假，先向stderr打印出错信息，然后调用abort终止程序
	while((*strDest++ = *strSrc++) != '\0');
	return address;
}

int main(int argc, const char *argv[])
{
	char str[32]="hello,world";
	char dest[32]={'\0'};
	printf("%s\n",mystrcpy(dest,str));
	int lenth = strlen(mystrcpy(dest,str));
	printf("%d\n",lenth);
	return 0;
}

/* 为什么用char * 类型的返回值？
 * 为了实现链式表达式，如上面17行代码
*/
