#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int f(int a, char* b);
//	{, , , , };
//	return 0;
//}

//������
//int main() {
//    char a = 'H';
//    a = (a > 'A' && a <= 'Z') ? (a + 32) : a;
//    printf("%c\n", a);
//    return 0;
//}

//����ȫ�ֱ����;ֲ���������������
//int fun(int i)
//{
//	int i = 0;
//}
//int main()
//{
//	int i;
//	fun();
//	return 0;
//}

//malloc����
//#include <stdlib.h>
//void fun(int* p1, int* p2, int* s) {
//    s = (int*)malloc(sizeof(int));
//    *s = *p1 + *(p2++);
//}
//int main() {
//    int a[2] = { 1, 2 }, b[2] = { 10, 20 }, * s = a;
//    fun(a, b, s);
//    printf("%d \n", *s);
//}

//��y���
//int main()
//{
//	int x = -10;
//	int y = 6;
//	if (x >= 0)
//		y = x > 0 ? 1 : 0;
//	else
//		y = -1;
//	printf("%d\n", y);
//	return 0;
//}

//C++����
//A(int aa, int bb)
//{ a = aa--; b = a * bb; }
//int main()
//{
//	Ax(4, 5);
//	return 0;
//}

//��
#define MAX(a, b) ((a) > (b) ? a : b )
int main() {
    int a = 5, b = 0;
    int c = MAX(++a, b);//���ú�֮ǰ��������1
    //Ȼ���½��ȫ����
    int d = MAX(++a, b + 10);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}