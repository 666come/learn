#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���������ȼ�
//int main()
//{
//	int n = 2;
//	int a = n += n -= n * n;
//	printf("%d\n", a);
//	return 0;
//}

//��·�����
//int main()
//{
//	int a = -1, b = 4, k;
//	k = (++a < 0) && !(b-- <= 0);//ִ�е�һ���������������������
//	printf("% d % d % d\n", k, a, b);
//	return 0;
//}

//��������
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

//����Ϸ�����
//int main()
//{
//	double a = -80.0e;
//	double b = -8e1.0;
//	int c = -080;
//	double d = -80.;
//	return 0;
//}

//��һ�ζ�����C++����
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

//������
//#include <iostream>
//using namespace std;
//int main() {
//    int x = -1;
//    unsigned int y = 2;
//
//    if (x > y) {//���з��ź��޷��Ų�ƥ�䣩���Զ�תΪ�޷���λ
//        cout << "x is greater";
//    }
//    else {
//        cout << "y is greater";
//    }
//}

//������
int main() {
    int i, a[5];
    for (i = 0; i <= 30; i++) {
        a[i] = 0;
        printf("%d:hello\n", i);
    }
    printf("%d:hello world", i);
    return 0;
}
