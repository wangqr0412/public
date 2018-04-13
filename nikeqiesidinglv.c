/*************************************************************************
	> File Name: nikeqiesidinglv.c
	> Author:<<华清小蝌蚪>>
	> Mail:1121044948@qq.com
	> Created Time: 2017年12月20日 星期三 21时38分48秒
 ************************************************************************/

#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,x;
    printf("请输入一个正整数:");
    scanf("%d",&n);
    printf("%d^3=",n);
    x=n*n-n+1;
    for(i=1;i<=n;i++)
    {
        printf("%d+",x);
        x+=2;
    }
    printf("\b ");      // '\b'是退格，删除最后的‘+’,但需要在‘\b’后加空格，否则起不到推个作用
    printf("\n");
    return 0;
}
