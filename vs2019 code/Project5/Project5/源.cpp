#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//(2进制)位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	//011
//	//101
//	//001
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//011
//	//101
//	//111 - 十进制位 -- 1*2^2+1*2^1+1*2^0=7
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//不是次方 - 是异或
//	//异或的运算规律：
//	// 对应的二进制位相同， 则为0
//	// 对应的二进制位不同， 则为1
//	//011
//	//101
//	//110  - 6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
////单目操作符
////双目操作符
////三目操作符
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//双目操作符- -俩个操作数
//	//c语言中我们表示真假
//	//0-假
//	//非0 - 真
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//sizeof  计算的是变量/类型所占的空间大小，单位是字节
//	printf("%d\n", sizeof(a) );//4
//	printf("%d\n", sizeof(int) );//4
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);sizeof是变量名 故int的（）不可省略
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};//10个整型元素的数组
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	//计算素组的元素个数
//	//个数 = 数组的总大小/每个元素的大小
//	return 0;
//}
//int main()
//{
//	//字符串的结束标志：‘\0’
//	//'\0' - 转义字符 - 0
//	//‘0’ -48(ASCII码值）
//	// 0  --- 数字0
//	// 'a' 'b ' 'c' '0' '1' '2'
//	//EOF  - end of file - 文件结束标志
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1 ,num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是: %d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1 ,2 ,3, 4 ,5 ,6};//28个字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//不可以这样写
//	//printf("%d\n", sizeof(arr));//计算数组大小  -- 单位是字节
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	int a = 0;//4个字节， 32个bit位
//	int b = ~a;//~按位取反--二进制位
//	//00000000000000000000000000000
//	//11111111111111111111111111111
//    //原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++ ， 先使用再++
//	//int b = ++a;//前置++ ，， 先++再使用
//	//int b = a--;//后置-- ， 先使用在--
//	//int b = --a;//前置--，，，先--再使用
//	printf("a = %d\n b = %d\n", a ,b);
//	return 0;
//}
