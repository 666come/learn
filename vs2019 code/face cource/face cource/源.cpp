#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
//int main()
//{
	//使用第三变量完成：交换俩个变量
	/*int a = 3;
	int b = 5;
	int ret = 0;
	ret = a;
	a = b;
	b = ret;
	printf("a=%d b=%d\n", a, b);*/
	//不使用第三变量完成：交换俩个变量
	//int a = 3;//整型有最大值
	//int b = 5;//溢出问题
	//INT_MAX;  2147483647//int - 4个字节 -32bit位 -最大值
	//a = b + a;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d\n", a, b);
	//使用异或交换俩个数字
	/*int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	return 0;
 }*/

//找出只出现一次的数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	//找出单身狗
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次;
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗:%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//代码优化
//int main()
//{
//	//1^1^2^2^3^3^4^4^5 =5;
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	//找出单身狗
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗:%d\n", ret);
//	return 0;
//}
// 关机程序
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };//存储数据
//	//system() -专门用来执行系统命令的
//	system("shutdown -s -t 60");//关机
//
//again:
//	printf("请注意：你的电脑在1分钟内关机，请输入我是猪：取消关机：>\n");//提示
//	scanf("%s", &input);//%s - 字符串
//	if (strcmp(input, "我是猪") == 0)//判断input中输入的是不是“我是猪”
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}