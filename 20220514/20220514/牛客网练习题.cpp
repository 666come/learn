#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char a[10] = 'a';//�����ԣ�����д��{'a'}����
//	return 0;
//}

//������
//#include <iostream>
//using namespace std;
//
//class Base {
//    char data[3];
//public:
//    virtual void f() {
//        cout << "Base::f" << endl;
//    }
//
//    virtual void g() {
//        cout << "Base::g" << endl;
//    }
//
//    virtual void h() {
//        cout << "Base::h" << endl;
//    }
//};
//int main() {
//    cout << sizeof(Base) << endl;
//    return 0;
//}

//һ�п����ж��Ԥ����ָ����
//#define mane 5 #define a
//int main()
//{
//	
//	return 0;
//}

//int main()
//{
//	register int i;//�Ĵ�������
//	return 0;
//}

char st[] = "hello,friend!";

void func1(int i);
void func2(int i);

void func1(int i)
{
    printf("%c", st[i]);
    if (i < 3)
    {
        i += 2;
        func2(i);
    }
}

void func2(int i)
{
    printf("%c", st[i]);
    if (i < 3)
    {
        i += 2;
        func1(i);
    }
}

int main()
{
    int i = 0;
    func1(i);
    printf("\n");
}