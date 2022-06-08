#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输出结果
//int main()
//{
//		int a = 3;
//		printf("%d\n", (a += a -= a * a));//a = -6    a+=a -> -12
//
//	return 0;
//}

//输出结果
//int main() {
//    int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
//    // 1  3  5  7
//    // 9 11 13 15
//    //17 19 21 23
//    int(*p)[4] = a, i, j, k = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 2; j++)
//            k = k + *(*(p + i) + j);//1 + 3 +9+11+17+19 = 60
//    printf("%d", k);
//    return 0;
//}

//宏定义
//#define a 4+5
//#define b a*a
//int main()
//{
//
//	printf("%d\n", b * b);
//	return 0;
//}

//#include <stdint.h>
//#include <stdio.h>
//int32_t f(int32_t a, int32_t b) {
//	while (a + b > 0) {
//		a = a + 1;//a =2
//		b = b - 1;//b =-1
//	}
//	return a + b;
//}
//int32_t main() {
//	int32_t res = f(1, 0);
//	return 0;
//}

//输出结果
//int main()
//{
//	int x = 10;
//	x += 3 + x % (3);
//	printf("%d\n", x);
//	return 0;
//}

int main()
{
    char a[3];
    char b[] = "good";
    a = b;//对于数组来说，不可以通过赋值符号赋值
    printf("%s", a);
	return 0;
}