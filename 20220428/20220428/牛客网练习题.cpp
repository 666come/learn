#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ִ�н��
//int  main() {
//    int a = 5, b = 4, c = 6, d;
//    printf("%d\n", d = a > b ? (a > c ? a : c) : (b));
//}

//����1�������ʲô
//void main()
//{
//    char c;
//    scanf("%c", &c);
//    switch (c)
//    {
//    case '1':
//        printf("1");
//    case '2':
//        printf("2");
//    case '3':
//        printf("3");
//    default:
//        printf("error");
//    }
//}

//��ӡ5��
//int main()
//{
//	int i,p;
//
//	for (i = 1, p = 1; i <= 5; i++)
//	{
//		p *= i;
//		
//	}
//	printf("%d\n", p);
//	return 0;
//}


//������ѭ���ȼ۵�ѭ����
//int main()
//{
//    int i=0, s=0;
//    while (1) {
//        if (i >= 100)
//            break;
//        s += i;
//        i++;
//    }   
//    printf("%d\n", s);
//	return 0;
//}


//����ת���ַ������ַ����������൱��һ���ַ�
//#include<string.h>
//int  main() {
//    char s[] = "\\123456\123456\t";
//    printf("%d\n", strlen(s));
//}


//���и�ʽ����ӡӦ�������
//int main()
//{
//	char a;
//	int b;
//	float c;
//	scanf(" % c, b = % d, f = : % f", &a, &b, &c);
//	printf("%c %d % f", a, b, c);
//	return 0;
//}


//���н��
//#include <stdint.h>
//int32_t f(int32_t a, int32_t b) {
//	while (a + b > 0) {
//		a = a + 1;
//		b = b - 1;
//	}
//	return a + b;
//}
//int32_t main() {
//	int32_t res = f(1, 0);
//	return 0;
//}


//�ж�scanf��������ִ�м���
//int main()
//{
//	int a, b;// --���������ʼ��
//	for (a = 0, b = 0; b != 100 && a < 5; a++) scanf("%d", &b);
//	return 0;
//}

//��֪A��ASCII��ֵ��65������
//int main() {
//    char c1 = 'A', c2 = 'Y';
//    printf("%d,%d\n", c1, c2);
//    return 0;
//}

//����
//void f(int* p) { *p = 5; }
//
//int main() {
//    int a, * p;
//    a = 10;
//    p = &a;
//    f(p);
//    printf("%d", (*p)++);
//    return 0;
//}


//����
#include <stdlib.h>
class A {
};
int main() {
    printf("%d\n", sizeof(class A));
    return 0;
}