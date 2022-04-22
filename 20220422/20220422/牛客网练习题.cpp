#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//64位机器上的输出结果是什么？
//int getSize(int data[]) {
//    return sizeof(data);
//}
//
//int main() {
//    int data1[] = { 1,2,3,4,5 };
//    int size1 = sizeof(data1);
//
//    int* data2 = data1;
//    int size2 = sizeof(data2);//指针
//
//    int size3 = getSize(data1);//指针
//
//    printf("%d, %d, %d", size1, size2, size3);
//    return 0;
//}//20 8 8 

//取模操作
//int main()
//{
//	int i = 0;
//	i = 2 % 2;
//	printf("%d\n", i);
//	return 0;
//}


//数列循环
//int main() {
//    int m = 0;
//    for (int i = 1; i <= 100; i++) {
//        for (int j = 1; j <= i; j++) {
//            if (j % 2 != 0)
//                continue;
//            m++;
//        }
//    }
//    printf("%d\n", m);
//    return 0;
//}

//混合类型运算结果
//int main()
//{
//	
//	char ch;
//	int i;
//	float f;
//	double d;
//	
//	return 0;
//}//取最高位 - double 
//

//指针赋值
//int main()
//{
//	char* ptr = NULL;
//	char str[] = "Hello";
//	ptr = str;
//	
//	printf("%d\n", *(ptr + 5));
//	return 0;
//}

//if条件语句和逻辑运算符的使用
//int main() {
//    int a = 2, b = 3, c = 4, d = 0;
//    if (a == 2 && b++ == 3)
//        if (b != 3 || c-- == 4)
//            printf("%d,%d,%d\n", a, b, c);
//        else
//            printf("%d,%d,%d\n", a, b, c);
//    else
//        printf("%d,%d,%d\n", a, b, c);
//}

//对m引用正确
//int main()
//{
//	int m = 10;
//	int& x = m;
//	printf("%p\n", x);
//	return 0;
//}

//运行如果
//int fun(int a) {
//    int b = 0;
//    static int c = 3; //一次运行结束不会销毁
//    b++;
//    c++;
//    return (a + b + c);
//}
//
//int main() {
//    int i = 0;
//    for (; i < 3; i++)
//        printf("%d", fun(2));
//    return 0;
//}

//函数调用
//#define f(x) x*x
//main() 
//{
//	int a = 6, b = 2, c;
//	c = f(a) / f(b);
//	printf("%d", c);
//	return 0;
//}//9


//函数调用
void foo(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main() {
    int a = 1, b = 2, c = 3;
    foo(&a, &b);
    foo(&b, &c);
    foo(&c, &a);
    printf("%d, %d, %d", a, b, c);
}//交换了b,c的值

