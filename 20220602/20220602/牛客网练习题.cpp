#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//操作符优先级
//int main()
//{
//	int n = 2;
//	int a = n += n -= n * n;
//	printf("%d\n", a);
//	return 0;
//}

//短路运算符
//int main()
//{
//	int a = -1, b = 4, k;
//	k = (++a < 0) && !(b-- <= 0);//执行第一个条件，不满足就跳出了
//	printf("% d % d % d\n", k, a, b);
//	return 0;
//}

//函数功能
//int fun(char* s) {
//    char* p = s;
//    while (*p++);
//    return p - s - 1;
//}
//int main()
//{
//    char arr[] = "asdfg";
//    printf("%d\n", fun(arr));
//    return 0;
//}

//定义合法的是
//int main()
//{
//	double a = -80.0e;
//	double b = -8e1.0;
//	int c = -080;
//	double d = -80.;
//	return 0;
//}

//第一次读懂了C++代码
//#include <iostream>
//using namespace std;
//char fun(char x, char y) {
//	if (x < y)
//		return x;
//	return y;
//}
//int main() {
//	int a = '1', b = '1', c = '2';
//	cout << fun(fun(a, b), fun(b, c));
//	return 0;
//}

//输出结果
//#include <iostream>
//using namespace std;
//int main() {
//    int x = -1;
//    unsigned int y = 2;
//
//    if (x > y) {//（有符号和无符号不匹配）会自动转为无符号位
//        cout << "x is greater";
//    }
//    else {
//        cout << "y is greater";
//    }
//}

//输出结果
int main() {
    int i, a[5];
    for (i = 0; i <= 30; i++) {
        a[i] = 0;
        printf("%d:hello\n", i);
    }
    printf("%d:hello world", i);
    return 0;
}
