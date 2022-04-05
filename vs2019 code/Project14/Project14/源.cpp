#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//go to 语句
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -d -t 60");
//again:
//	printf("请注意你的电脑会在一分钟之内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较俩个字符串 - strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -d -t 60");
//	while (1)
//	{
//		printf("请注意你的电脑会在一分钟之内关机，如果输入：我是猪，就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)//比较俩个字符串 - strcmp()
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}