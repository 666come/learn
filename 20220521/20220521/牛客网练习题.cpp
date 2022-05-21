#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//赋值运算符
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	a = b = c + 2;
//	a = a + 7 = c + b;//俩个赋值号，中间的数不可以被修改
//	return 0;
//}

//函数形参接收值，中间不能加；
//void test(int a; int b)
//{
//
//}
//int main()
//{
//	int a = 3, b = 5;
//	test(a, b);
//	return 0;
//}

//struct jan { int a; float b; }c2, * p;
//int main()
//{
//	p->a;
//	(*p).a;
//	return 0;
//}

//浮点数
//int main()
//{
//	//double c =le3.5;
//	15.;
//	8e+2;
//	//5.0e(1 + 4);
//	/*le + 5;*/
//	return 0;
//}

//宏展开
//#define ADD(x)  x+x
//int main()
//{
//    int m = 1, n = 2, k = 3;
//    int sum = ADD(m + n) * k;
//    printf("sum=%d", sum);
//}

//数组引用
//int main()
//{
//	int i = 2, j = 3;
//	int a[4][10] = { {1,2},{4,5,6} };
//	printf("%d\n", *(*(a + i) + j));
//
//	return 0;
//}


struct Date
{
    char a;
    int b;
    int c;
    char d;
};
Date data[2][10];
int main()
{
    printf("%d\n", data[1][5].c);

    return 0;
}