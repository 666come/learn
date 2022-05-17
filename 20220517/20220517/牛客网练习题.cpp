#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输出结果
//int main()
//{
//	char str[] = "glad to test something";
//	char* p = str;
//	p++;
//	int* p1 = reinterpret_cast<int*>(p);
//	p1++;
//	p = reinterpret_cast<char*>(p1);
//	printf("result is %s\n", p);
//	return 0;
//}

//输出结果
//#include <stdlib.h>
//void fun(int* p1, int* p2, int* s) {
//    s = (int*)malloc(sizeof(int));
//    *s = *p1 + *(p2++);//都是复制品，不会改变原来的大小
//}
//int main() {
//    int a[2] = { 1, 2 }, b[2] = { 10, 20 }, * s = a;
//    fun(a, b, s);
//    printf("%d \n", *s);
//}


//输出结果
//void func(int* a, int b[]) { b[0] = *a + 6; }
//int main() {
//    int a, b[5];
//    a = 0;
//    b[0] = 3;
//
//    func(&a, b);
//
//    printf("%d\n", b[0]);
//}

//int func(int a) {
//    int b;
//    switch (a) {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }//switch语句如果没有break；就一直执行到最后一个条件，包括default
//    return b;
//}
//int main()
//{
//   
//    printf("%d\n", func(1));
//    return 0;
//}

//#include<string.h>
//int main()
//{
//	const char* p1 = "123", * p2 = "ABC";
//	char str［50］ = "xyz";
//	strcpy(str + 2, strcat(p1, p2));//会出错，指向的是常量区，无法拼接
//	printf("%s\n", str);
//	return 0;
//}

X a;
a.x = 0x11223344;  union X {
    int x;
    char y[4];
};
int main()
{

	return 0;
}
