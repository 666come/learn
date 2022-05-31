#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输出结果
//#include <string.h>
//void Func(char str_arg[100]) 
//{ printf("%d\n", sizeof(str_arg)); }//指针32位4bit
//int main(void) {
//    char str[] = "Hello";
//    printf("%d\n", sizeof(str));//6
//    printf("%d\n", strlen(str));//5
//    char* p = str;//
//    printf("%d\n", sizeof(p));//指针32位4bit
//    Func(str);
//}

//#include<iostream>
//using namespace std;
//class A {
//public:
//	void f() {
//		cout << "A::f()";
//	}
//};
//class B : public A {
//public:
//	void f() {
//		cout << "B::f()";
//	};
//};
//int main() {
//	B b;
//	b.f();
//}

//宏定义
//#define X   5
//#define Y   X+1
//#define Z   Y*X/2
//int main() {
//    int a = Y;
//    printf("%d,%d", Z, --a);
//}

//int main()
//{
//	int a = 1 / 2;//0
//	int b = 1 % 2;//1
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main() {
//    int x, y, z;
//        scanf("%d%d%d", &x, &y, &z);//结果无法预测
//    printf("x+y+z=%d\n", x + y + z);
//}

//测试C语言关键字
int main()
{
	auto;
	register;
	function;
	
	return 0;
}