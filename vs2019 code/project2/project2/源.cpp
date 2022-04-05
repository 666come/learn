#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
	//char ch = 'A';//内存
	//printf("%c\n", ch);//%c -- 打印字符格式的数据
	//float f = 20.5;
	//%d - 打印整型
	//%c - 打印字符
	//%f - 打印浮点数字
	//%p - 以地址的形式打印
	//%x - 打印16进制数字
	//%o ...
	//short （int）(短整型)
	//long （int）(长整型）
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//printf("%d\n", sizeof(char));//1字节 8bit
	//printf("%d\n", sizeof(short));//2字节
	//printf("%d\n", sizeof(int));//4字节
	//printf("%d\n", sizeof(long));//4字节
	//printf("%d\n", sizeof(long long));//8字节
	//printf("%d\n", sizeof(float));//4字节
	//printf("%d\n", sizeof(double));//8字节
	//short age = 20;//向内存申请2个字符=15bit位，用来存放20
	//float weight = 95.6f;
	//return 0;
//int num2 = 20;//全局变量-定义在代码块{}外面的变量
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块{}里面的变量
//	return 0;
//
//int a = 100;
//int main()
//{
//	//int a = 10;//局部变量和全局变量的名字最好不要一样-容易误会，产生bug
//	//当局部变量和全局变量同时出现的时候优先输出局部变量
//	printf("%d\n", a);
//	return 0;
//
//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数
//	scanf("%d%d", &num1, &num2 );//取地址符号&
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	{//作用域
//		
//		printf("num = %d\n", num);
//	}
//	return 0;
//}
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n" , global);
//	return 0;
int main()
{   
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf(" g_val = %d\n", g_val);
	return 0;
}