/*************************************************************************
	9.> File Name: m_n_arr.c
	> Author:<<华清小蝌蚪>>
	> Mail:1121044948@qq.com
	> Created Time: 2017年12月20日 星期三 21时51分06秒
 ************************************************************************/

#include<stdio.h>
#define K 10
int main(int argc, char *argv[])
{
    int a[K]={1,2,3,4,5,6,7,8,9,10};
    int m,n,sum=0;
    int *p=a;
    printf("请输入m,n(n<m<K):");
    scanf("%d %d",&m,&n);
    if(!(m<n && n<K))
    {
        printf("你输入的m,n不符合条件，请检查后重新输入m,n:");
        scanf("%d %d",&m,&n);
    }
    for(p=p+m-1;p<a+n;p++)
    {
        sum+=*p;
    }
    printf("sun=%d\n",sum);
}
