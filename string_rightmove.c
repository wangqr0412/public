/****************************************   
*  File Name  : loopMove.c   
*  Creat Data : 2015.3.24  
*  Author     : wk   
*****************************************/   
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLEN 20
void LoopMove1(char *str,int n)
{
     char *p=str;
     char temp[MAXLEN];//定义一个数组
     int len=strlen(str);
     int remain=len-n;//记录剩余的的字符串长度 
          strcpy(temp,str+remain);
		  strcpy(temp+n,str);
	  /*这是左移需要替换的代码
	  strcpy(temp,str+n);    
      strcpy(temp+remain,str);*/
		  
    *(temp+len)='\0';
     strcpy(p,temp);
     
}
void LoopMove2(char *pstr,int n)
{
     int remain=strlen(pstr)-n;
     char temp[MAXLEN];
     memcpy(temp,pstr+remain,n);
	 memcpy(pstr+n,pstr,remain);
	 memcpy(pstr,temp,n);
	 
	/* 这是左移需要替换的代码
	 memcpy(temp,pstr+n,remain); 
     memcpy(pstr+remain,pstr,n);
     memcpy(pstr,temp,remain);*/
	   
}
int main()
{
    char pstr[]="abcdef12";
    int n=2;
    LoopMove1(pstr,n);
	printf("%s\n",pstr);
    char pstr2[]="12abcdef";
    LoopMove2(pstr2,n);
    	printf("%s\n",pstr2);
    system("pause");
    return 0;
}
