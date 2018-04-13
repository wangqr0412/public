/*
①使用*(unsigned char*)str1而不是用*str1。这是因为传入的参数为有符号数，有符号字符值的范围是-128~127，
无符号字符值的范围是0~255，而字符串的ASCII没有负值，若不转化为无符号数这回在减法实现时出现错误。
例如 str1的值为1，str2的值为255。
作为无符号数计算时ret = -254,结果为负值，正确
作为有符号数计算时ret = 2,结果为正值，错误
②While循环中ret=*(unsigned char*)str1-*(unsigned char*)str2) && *str1，最后与上str1也可以换成str2，
因为前面已经做了相减，无论哪个先为‘\0’都会退出。因为最后与上str1是为了判断str1是否结束，即是否为‘\0’。
*/
#include <stdio.h>
#include <assert.h>

int mystrcmp(const char *str1,const char *str2)
{
	int ret=0;
	assert(str1 != NULL && str2 != NULL);
	while(!(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str2)
	{
		str1++;
		str2++;
	}
	if(ret < 0)
		 ret = -1;
	else if(ret > 0)
		 ret = 1;
	return ret;
}

int main(int argc, const char *argv[])
{
	char *str1="hello";
	char *str2="hello";
	int ret;
	ret = mystrcmp(str1,str2);
	printf("%d\n",ret);
	return 0;
}
