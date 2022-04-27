#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//位操作符
//int main()
//{
//	int i = 5;
//	//00000000000000000000000000000110
//	int j = 7;
//	//00000000000000000000000000000111
//	i | j;
//	//7
//	return 0;
//}

//浮点型常量定义是否正确
//int main()
//{
//	const float pi = 3.1415926f;
//	printf("%f\n", pi);
//	return 0;
//}
//
//程序运行结果
//int main() {
//    int a = 1, b = 10;
//    do {
//        b -= a;
//        a++;
//    } while (b-- < 0);
//    printf("a=%d,b=%d\n", a, b);
//}easy

//指针移位
//int main()
//{
//	unsigned char* p1;
//	unsigned long* p2;
//	p1 = (unsigned char*)0x801000;
//	p2 = (unsigned long*)0x810000;
//	printf("%p\n", p2+5);
//	return 0;
//}


//执行结果
//int main() {
//    int* p = NULL;
//    int a[] = { 1, 2, 3, 4 };
//    p = a;
//    *(p++) += 100;
//    printf("%d %d %d %d %d\n", *p, a[0], a[1], a[2], a[3]);
//    return 0;
//}


//宏  --整体赋值
//#define MIN(x,y)    (x)<(y) ? (x):(y)
//int main() {
//    int i = 10, j = 15, k;
//    k = 10 * MIN(i, j);
//    printf("%d\n", k);
//}


//执行结果
//int i;
//int main() {
//    for (i = 0; i < 3; i++) {
//        switch (i) {
//        case 0: printf("%d", i);
//        case 2: printf("%d", i);
//        default: printf("%d", i);
//        }
//    }
//}

//以下对数组的定义能否正确打印student呢？？？  --答案不确定，用循环打印可以，别的可能出现乱码
//int main()
//{
//	int i = 0;
//	char ch[7] = { 's',  't', 'u', 'd', 'e', 'n', 't' };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}

//定义数组的方式
//int main()
//{
//	
//	int i = 2017;
//	int arr[i];//错误的定义数组
//	int arr[2017 * 2];//可以是常量表达式
//		return 0;
//}