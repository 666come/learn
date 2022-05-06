#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);// - 地址向右偏移一位
//    printf("%d, %d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//typedef struct list_t {
//	struct list_t* next;
//	struct list_t* prev;
//	char data[0];//柔性数组不占空间
//}list_t;
//int main()
//{
//	printf("%d\n ", sizeof(list_t));
//	return 0;
//}


//#include <string.h>
//void fun(const char* s) {
//    char a[10];
//    strcpy(a, "STRING");
//    s = a;
//}
//
//int main() {
//    const char* p = "PROGRAM";
//    fun(p);
//    printf("%s\n", p);
//}

//C++
//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    A() :m_iVal(0) { test(); }
//    virtual void func() { std::cout << m_iVal << ' '; }
//    void test() { func(); }
//public:
//    int m_iVal;
//};
//class B : public A {
//public:
//    B() { test(); }
//    virtual void func() {
//        ++m_iVal;
//        std::cout << m_iVal << ' ';
//    }
//};
//int main(int argc, char* argv[]) {
//    A* p = new B;
//    p->test();
//    return 0;
//}

int main()
{
	int a = 1,b=2;
	int c = a++ + b;
	printf("%d %d ", c, a);
	return 0;
}