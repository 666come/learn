#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int f(int a, char* b);
//	{, , , , };
//	return 0;
//}

//输出结果
//int main() {
//    char a = 'H';
//    a = (a > 'A' && a <= 'Z') ? (a + 32) : a;
//    printf("%c\n", a);
//    return 0;
//}

//测试全局变量和局部变量可以重名？
//int fun(int i)
//{
//	int i = 0;
//}
//int main()
//{
//	int i;
//	fun();
//	return 0;
//}

//malloc函数
//#include <stdlib.h>
//void fun(int* p1, int* p2, int* s) {
//    s = (int*)malloc(sizeof(int));
//    *s = *p1 + *(p2++);
//}
//int main() {
//    int a[2] = { 1, 2 }, b[2] = { 10, 20 }, * s = a;
//    fun(a, b, s);
//    printf("%d \n", *s);
//}

//求y结果
//int main()
//{
//	int x = -10;
//	int y = 6;
//	if (x >= 0)
//		y = x > 0 ? 1 : 0;
//	else
//		y = -1;
//	printf("%d\n", y);
//	return 0;
//}

//C++语言
//A(int aa, int bb)
//{ a = aa--; b = a * bb; }
//int main()
//{
//	Ax(4, 5);
//	return 0;
//}

//宏
#define MAX(a, b) ((a) > (b) ? a : b )
int main() {
    int a = 5, b = 0;
    int c = MAX(++a, b);//调用宏之前先自增了1
    //然后导致结果全变了
    int d = MAX(++a, b + 10);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}