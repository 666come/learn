#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//*(解引用)和++的优先级相同
//int main()
//{
//	int x = 3, y;
//	int* px = &x;
//	y = *px++;//
//	printf("%d %d", x, y);
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int x;
//	int y = ((x = 4 * 5, x * 5), x + 25);//x=20, x+25
//	printf("%d %d", x, y);
//	return 0;
//}

//int main() {
//    int p[8] = { 11, 12, 13, 14, 15, 16, 17, 18 }, i = 0, j = 0;
//    while (i++ < 7)//注意判断条件
//        if (p[i] % 2) j += p[i];
//    printf("%d\n", j);
//}

//输出结果
//int main()
//{
//    if ('\0' == 0)putchar('X');
//    if ('\0' == 0)putchar('Y');
//    if ('a' > 'b')putchar('Z');
//    printf("\n");
//}

#include <iostream>
using namespace std;

class A {
public:
    A() :m_iVal(0) { test(); }
    virtual void func() { std::cout << m_iVal << ' '; }
    void test() { func(); }
public:
    int m_iVal;
};
class B : public A {
public:
    B() { test(); }
    virtual void func() {
        ++m_iVal;
        std::cout << m_iVal << ' ';
    }
};
int main(int argc, char* argv[]) {
    A* p = new B;
    p->test();
    return 0;
}