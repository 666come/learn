#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//
//	return 0;
//}

//��չ���������û������������
//#define X   5
//#define Y   X+1
//#define Z   Y*X/2
//int main() {
//    int a = Y;
//    printf("%d,%d", Z, --a);
//}

//��
//class A
//{
//public:
//    void f()
//    {
//        printf("A\n");
//    }
//};
//
//class B : public A
//{
//public:
//    virtual void f()
//    {
//        printf("B\n");
//    }
//};
//
//int main()
//{
//    A* a = new B;
//    a->f();
//    delete a;
//    return 0;
//}

//������
//int a = 1, b = 2;
//void funl(int a, int b) //�ֲ�����
//{ printf("%d%d", a, b); }
//
//void fun2() {
//    a = 3; //ȫ�ֱ���
//    b = 4;
//}
//
//int main() {
//    funl(5, 6);
//    fun2();
//    printf("%d%d\n", a, b);
//}

void  print()const;

int main()
{
	print();
	return 0;
}