#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 100;
//	int* p = &a;
//	printf("%p\n", p);//p里面存放的是地址
//	printf("%d\n", *p);//*p里面存放的是值
//	return 0;
//}

//输出结果
//int main() {
//    unsigned char a = 235;
//    //1110 1011
//    unsigned char b = ~a;
//    //0001 0100
//    unsigned char c = b >> 1;
//    //0000 1010
//    printf("%d" , c);
//}

//输出结果
//int main() {
//    int m[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    int(*p)[4] = (int(*)[4])m;
//    printf("%d", p[1][2]);
//    return 0;
//}

//输出结果
//int main() {
//	int a, b, c, x;
//	a = b = c = 0; x = 35;
//	if (!a) x--;
//	else if (b);
//	if (c) x = 3;
//	else x = 4;
//	printf("%d\n", x);
//	return 0;
//}

//数据溢出
//int main()
//{
//	short int i = 32769;//发生截断后，符号位被保留了，超出最大值俩位
//	printf("%d\n", i);
//	return 0;
//}

//测试for循环 --if不添加判断条件，无论怎么调整都会死循环
//int main()
//{
//	int i,sum;
//	for (i = 10;; i--)
//		printf("%d\n", i);
//	return 0;
//}

