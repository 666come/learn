#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;//4
//	float f = 10.0;//4
//	short a = 10;
//	short int  b = 10; //--(int)可以省略
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int a = 20;//14 00 00 00 --用16进制表示的地址
//	//00000000000000000000000000010100  --原码
//	//00000000000000000000000000010100  --补码
//	//0000 0000 0000 0000 0000 0000 0001 0100  --反码
//	//0x00000014
//	int b = -10;//f6 ff ff ff
//	//10000000000000000000000000001010  --原码
//	//11111111111111111111111111110101  --反码
//	//1111 1111 1111 1111 1111 1111 1111 0110  --补码
//	//0xFFFFFFF6
//	return 0;
//}

//int main()
//{
//	1 - 1;
//	//1 +(-1);
//	// 1的原码、反码、补码
//	//00000000000000000000000000000001  --原码
//	//00000000000000000000000000000001  --反码
//	//00000000000000000000000000000001  --补码
//
//	// -1的原码、反码、补码
//	//10000000000000000000000000000001   --原码
//	//11111111111111111111111111111101   --反码
//	//11111111111111111111111111111110   --补码
//
//	//俩个补码相加
//	//00000000000000000000000000000001
//	//11111111111111111111111111111110
//	//100000000000000000000000000000000 变成33位了
//	//00000000000000000000000000000000  直接把1丢掉 --可以理解位左移一位
//	return 0;
//}


//int main()
//{
//    //写一段代码告诉我们当前机器的字节序是什么
//	int a = 1;
//	char* p = (char*)&a;//强制类型转换
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//		printf("大端存储\n");
//	return 0;
//}

//代码优化
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//强制类型转换
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，打断
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	/*int* p = &a;
//	*p = 0;*/
//	double* p = (double*)&a;
//	*p = 0;
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001 --原码
//	//11111111111111111111111111111110 --反码
//	//11111111111111111111111111111111 --补码
//	//11111111 --char a 的补码
//	//11111111111111111111111111111111 --整型提升后的补码
//	//11111111111111111111111111111110 --整型提升后的反码
//	//10000000000000000000000000000001 --整型提升后的原码
//	//打印：原码-1
//	signed char b = -1;
//	//11111111 --char b 的补码
//	//11111111111111111111111111111111 --整型提升后的补码
//	//11111111111111111111111111111110 --整型提升后的反码
//	//10000000000000000000000000000001 --整型提升后的原码
//	//打印：原码-1
//	unsigned char c = -1;
//	//11111111
//	//00000000000000000000000011111111  --整型提升后的补码 --正数（原码、反码、补码相同）
//	//打印：原码255
//	printf("a=%d,b=%d,c=%d", a, b, c); //-1， -1， 255
//	return 0;
//}

//2.
//int main()
//{
//	char a = -128;
//	//10000000
//	//11111111111111111111111110000000  -整型提升后的补码
//
//	//无符号 --所以直接打印了
//	printf("%u\n", a);
//	//%d -  打印十进制的有符号数字
//	//%u -  打印十进制的无符号数字
//	return 0;
//}

//3
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//4.
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100  -原码
//	//11111111111111111111111111101011  -反码
//	//11111111111111111111111111101100  -补码 
//
//	unsigned int j = 10;
//	//00000000000000000000000000001010  -原码、反码、补码
//
//	printf("%d\n", i + j);
//	//11111111111111111111111111101100  -补码
//    //00000000000000000000000000001010  -原码、反码、补码
//	//11111111111111111111111111110110  -求和补码 
//	//11111111111111111111111111110101  -求和反码
//	//10000000000000000000000000001010  -求和原码
//	//-10  
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char a[1000];
//	// -128 到 127 
//	int i;
//	//-129
//	//10000000000000000000000010000001 原码
//	//11111111111111111111111101111110 反码
//	//11111111111111111111111101111111 补码
//
//	//char型  发生截断 故只保留后面的8bit位 01111111 --127
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//-1,-2,-3 ...-128,127,126,125,...0  ->结束
//	//即128+127=255
//	return 0;
//}

//7.
//#include <windows.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		Sleep(100);
//	}
//
//	return 0;
//}

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n",d);
//	return 0;
//}

// 
     //9.0
	//1001.0
	//(-1)^0 * 1.001 * 2^3
	//(-1)^S * M     * 2^E
	//S - 0
	//M - 1.001
	//E = 3

	//0.5
	//0.1
	//(-1)^0 * 1.0 * 2^-1
	//S = 0
	//M = 1.0
	//E = -1
	//E + 127 =126

int main()
{

	int n = 9;
	//00000000000000000000000000001001 -补码
	
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);//9
	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
	//0 00000000 00000000000000000001001 
	//(-1)^0 * 0.00000000000000000001001 * 2^-126
	*pFloat = 9.0;
	//1001.0
	//1.001* 2^3
	//(-1)^0 * 1.001 * 2 ^ 3
	//0 10000010 0010000000000000000000
	printf("num的值为：%d\n", n);//
	//0100000100010000000000000000000
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011 * 2^2
//	//S = 0
//	//M = 1.011
//	//E = 2
//	//0100 0000 1011 0000 0000 0000 0000 0000
//    //0X40b00000
//	//小端存储 倒着读
//
//	//0 00000000 01100000000000000000000
//	//+/- 0.011 * 2^-126
//	//无穷小
//	//
//	//0 11111111 01100000000000000000000
//	//+/- 0.011 * 2^128
//	//无穷大
//
//	return 0;
//}

