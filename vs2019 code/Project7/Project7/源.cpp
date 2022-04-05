#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define MAX 100 //#define定义的标识符常量
//#define 还可以定义宏  - 带参数

//函数的实现
//int Max(int x , int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	 max = MAX(a,b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//	}
//int main()
//{
//	int a = 10;//4个字节
//	int * p = &a; //取地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	//* -- 解引用操作符
//	//有一种变量是用来存放地址的 - 指针变量
//	//printf("%d\n", &a);//取a的地址
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char *)); //- 4
//	printf("%d\n", sizeof(short *));// -4 
//	printf("%d\n", sizeof(int *)); // -4
//	printf("%d\n", sizeof(double *));//-4
//
//	return 0;
//}
int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;
}
//int main()
//{
//	//int a = 10;//申请了4个字节的空间
//	////printf("%p\n", &a);//a的地址
//	//int* p = &a;
//	////printf("%p\n", p);//p是一个变量 - 指针变量
//	//*p =20;//解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//	/*double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));*/
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	return 0;
//}