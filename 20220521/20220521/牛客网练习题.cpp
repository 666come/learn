#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��ֵ�����
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	a = b = c + 2;
//	a = a + 7 = c + b;//������ֵ�ţ��м���������Ա��޸�
//	return 0;
//}

//�����βν���ֵ���м䲻�ܼӣ�
//void test(int a; int b)
//{
//
//}
//int main()
//{
//	int a = 3, b = 5;
//	test(a, b);
//	return 0;
//}

//struct jan { int a; float b; }c2, * p;
//int main()
//{
//	p->a;
//	(*p).a;
//	return 0;
//}

//������
//int main()
//{
//	//double c =le3.5;
//	15.;
//	8e+2;
//	//5.0e(1 + 4);
//	/*le + 5;*/
//	return 0;
//}

//��չ��
//#define ADD(x)  x+x
//int main()
//{
//    int m = 1, n = 2, k = 3;
//    int sum = ADD(m + n) * k;
//    printf("sum=%d", sum);
//}

//��������
//int main()
//{
//	int i = 2, j = 3;
//	int a[4][10] = { {1,2},{4,5,6} };
//	printf("%d\n", *(*(a + i) + j));
//
//	return 0;
//}


struct Date
{
    char a;
    int b;
    int c;
    char d;
};
Date data[2][10];
int main()
{
    printf("%d\n", data[1][5].c);

    return 0;
}