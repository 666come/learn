#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ִ�н��
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

//ִ�н��
//int main()
//{
//    const char* str[3] = { "stra", "strb", "strc" };
//    const char* p = str[0];// -p�������Ԫ��
//    int i = 0;
//    while (i < 3)
//    {
//        printf("%s ", p++);
//        i++;
//    }
//    return 0;
//}

//�ݹ�
//int f(int n) {
//    if (n)
//        return f(n - 1) + n;
//    else return n;


//ִ�н��
//int main() {
//    char num;
//    for (num = 1; num < 255; )
//        num += num;
//    printf("%d\n", num);
//    return 0;
//}��ѭ��

//���³������fun ������������������ֵ����ӦԪ�ص��±ꡣ--�ڶ�������
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
//    printf("%d %d��n", k, a[k]);
//}

//������
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
// �Ƚϵ�ַ
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char str1[] = "hello world";
//    char str2[] = "hello world";//�ֲ��������ѷ���ջ�У���ַ��һ��
//
//    const char str3[] = "hello world";
//    const char str4[] = "hello world";//�ֲ��������ѷ���ջ�У���ַ��һ��
//
//    const char* pstring1 = "hello world";
//    const char* pstring2 = "hello world";//����ָ��ָ����ͬ�ĵ�ַ
//
//    cout << boolalpha << (str1 == str2) << ',';
//    cout << boolalpha << (str3 == str4) << ',';
//    cout << boolalpha << (pstring1 == pstring2) << endl;
//
//    return 0;
//}

//������
//#include "stdio.h"
//int main() {
//    int c = 0, k;
//    for (k = 1; k < 3; k++) {
//        switch (k) {
//        default: c += k;//default���÷����������������Ǿ�����
//        case   2: c++;
//            break;
//        case   4: c += 2;
//            break;
//        }
//    }
//    printf("%d\n", c);
//    return 0;
//}   

