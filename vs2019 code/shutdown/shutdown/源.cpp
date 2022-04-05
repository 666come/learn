#define _CRT_SECURE_NO_WARNINGS
// 关机程序
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//存储数据
	//system() -专门用来执行系统命令的
	system("shutdown -s -t 60");//关机

again:
	printf("请注意：你的电脑在1分钟内关机，请输入我是猪：取消关机：>\n");//提示
	scanf("%s", &input);//%s - 字符串
	if (strcmp(input, "我是猪") == 0)//判断input中输入的是不是“我是猪”
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}