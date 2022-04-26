#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//执行结果
//int main() {
//    int	a, b;
//    for (a = 1, b = 1; a <= 100; a++) {
//        if (b >= 20)
//            break;
//        if (b % 3 == 1) {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}//8

//执行结果
//int main()
//{
//    const char* str[3] = { "stra", "strb", "strc" };
//    const char* p = str[0];// -p存的是首元素
//    int i = 0;
//    while (i < 3)
//    {
//        printf("%s ", p++);
//        i++;
//    }
//    return 0;
//}

//递归
//int f(int n) {
//    if (n)
//        return f(n - 1) + n;
//    else return n;


//执行结果
//int main() {
//    char num;
//    for (num = 1; num < 255; )
//        num += num;
//    printf("%d\n", num);
//    return 0;
//}死循环

//以下程序调用fun 函数后输出数组中最大值及对应元素的下标。--第二次遇到
//void fun(int* s, int n, int* k) {
//    int i;
//    for (i = 0, *k = i; i < n; i++)
//        if (s[i] > s[*k])
//
//            // ________
//            ;
//}
//
//int main() {
//    int a[5] = { 1, 6, 2, 8, 0 }, k;
//    fun(a, 5, &k);
//    printf("%d %d＼n", k, a[k]);
//}

//输出结果
//void main() {
//    int a = 1;
//    int b = 2;
//    for (; a < 8; a++) {
//        b += a;
//        a += 2;
//    }   
//    printf("%d, %d\n", a, b);
//}
//
// 比较地址
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char str1[] = "hello world";
//    char str2[] = "hello world";//局部变量都堆放在栈中，地址不一样
//
//    const char str3[] = "hello world";
//    const char str4[] = "hello world";//局部变量都堆放在栈中，地址不一样
//
//    const char* pstring1 = "hello world";
//    const char* pstring2 = "hello world";//俩个指针指向相同的地址
//
//    cout << boolalpha << (str1 == str2) << ',';
//    cout << boolalpha << (str3 == str4) << ',';
//    cout << boolalpha << (pstring1 == pstring2) << endl;
//
//    return 0;
//}

//输出结果
//#include "stdio.h"
//int main() {
//    int c = 0, k;
//    for (k = 1; k < 3; k++) {
//        switch (k) {
//        default: c += k;//default的用法：当不满足条件是就用它
//        case   2: c++;
//            break;
//        case   4: c += 2;
//            break;
//        }
//    }
//    printf("%d\n", c);
//    return 0;
//}   

