#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//表达式是否正确
//int main()
//{
//	int a = 20;
//	if (10 < a < 15)
//		printf("%d\n", a);
//	return 0;
//}//编译器太智能了，按道理来说是错误的。因为关系操作符的返回值是0和1，所以结果是1才对。

//输出结果
//#include<stdlib.h>
//int  main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//}

//int main()
//{
//	const char* const name = " Chen ";
//
//	return 0;
//}

//32位系统下的打印结果
//int main() {
//    char str[] = { "hello world" };
//    printf("%s", str);
//    return 0;
//}

//运算符优先级
//int main()
//{
//	int a = 7, b = 9, t;
//	t = a *= a > b ? a : b;//条件运算符优先级高一点
//	printf("%d", t);
//	return 0;
//}

const char* a[] = { "BEIJING", "SHENZHEN", "SHANGHAI", "GUANGZHOU" };
const char** pa[] = { a + 3, a + 2, a + 1, a };
const char*** ppa = pa;
int main(void) {
    printf("%s, ", **++ppa);
    printf("%s, ", *-- * ++ppa + 3);
    printf("%s, ", *ppa[-2] + 3);
    printf("%s", ppa[-1][-1] + 1);
}