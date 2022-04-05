#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//double -->int//这就是强制类型转换
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//真 - 非 0 
//	//假 -  0 
//	//&& -- 逻辑与
//	int a = 3;
//	int b = 0;
//	//int c = a && b;//逻辑与 -- 一假为假
//	int  c = a || b; //逻辑或 --  一真都真
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//--下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()---函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}
//只要是整数，内存中存储的都是二进制的补码
//正数 -- 原码， 反码， 补码  相同
//负数 -- >
//         （原码）直接按照正负写出的二进制序列
         //（反码）原码的符号位不变，其他位按位取反得到的
//         （补码）反码+1
//列子：
//-2
//1000000000000000000000000000010  - 原码
//1111111111111111111111111111101  - 反码
//1111111111111111111111111111110  - 补码
//int main()
//{
//    /*register int a = 10;*///建议把a定义成寄存器变量，
//    //typedef  - 类型定义/类型重定义
//    //张三  -- 小三  -- 大名和小名
//    typedef unsigned int u_int;
//    unsigned int num = 20;
//    u_int num2 = 20;
//    return 0;
//}
//void test()
//{
//    //1.static修饰局部变量
//    //局部变量的生命周期变长了
//   static int a = 1;//是一个静态的局部变量
//   a++;
//   printf("a= %d\n", a);//2 3 4 5 6
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}
//int main()//2.static修饰全局变量
////改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
////出了源文件就没法再使用了
//{
//    //extern  --  声明外部符号的
//    extern int g_val;
//    printf("g_val = %d\n", g_val);
//    return 0;
//}

//声明外部函数
extern int Add(int , int);
int main()
//3.static修饰函数
//也是改变了函数的作用域 - 不准确
//static修饰函数改变了函数的链接属性，
//外部链接属性 -- -内部链接属性
//
{
    int a = 10;
    int b = 20;
    int sum = Add(a, b);
    printf("sum = %d\n", sum);
    return 0;
    }