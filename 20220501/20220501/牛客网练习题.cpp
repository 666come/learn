#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//sizeof�����Լ����ֵ
//int main()
//{
//	printf("%d\n",sizeof(void));
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(void) {
//    vector<int>array;
//    array.push_back(100);
//    array.push_back(300);
//    array.push_back(300);
//    array.push_back(500);
//    vector<int>::iterator itor;
//    for (itor = array.begin(); itor != array.end(); itor++) {
//        if (*itor == 300) {
//            itor = array.erase(itor);
//        }
//    }
//    for (itor = array.begin(); itor != array.end(); itor++) {
//        cout << *itor << " ";
//    }
//    return 0;
//}


//��������Ҫ����ַ
//int function(int a, int b, int c) {
//    c = a * b;
//    return c;
//}
//int main(void) {
//    int c = 0;
//    function(10, 20, c);
//    printf("%d", c);
//}

//int main()
//{
//	double a = 1.2;
//	double b = 2.4;
//	a = a + b = b++;
//	//������ֵ���ʽ���޷�������и�ֵ
//	return 0;
//}


//�ָ���
//int main()
//{
//	's'1'b'
//	return 0;
//}
//
//ִ�н��
//void add(int* p) {
//	(*p)++;
//	printf("%d", *p);
//	if (*p > 5) {
//		return;
//	}
//	add(p);
//}
//int main() {
//	int i = 0;
//	add(&i);
//	return 0;
//}


//C++����
//class A {
//public:
//    void test() { printf("test A"); }
//};
//int main()
//{
//    A* pA = NULL;
//    pA->test();
//    return 0;
//}