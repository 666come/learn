#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	const char ch;//const �����趨��ʼֵ
//	const bool mark = true;
//	return 0;
//}

//������
//int main() {
//    int i, sum;
//    for (i = 1; i < 6; i++)
//        sum += i; //sum û�г�ʼ��
//    printf("%d\n", sum);
//    return 0;
//}//�޷�����

//������
//void f(char** p) { *p += 2; }
//int main() {
//    const char* a[] = { "123", "abc", "456" }, ** p;
//    p = a;
//    f(p);
//    printf("%s", *p);
//}

//λ������
//int main()
//{
//	int c = 10 | 11;
//	//1010 | 
//	//1011
//	//1011
//	return 0;
//}

//switch���Ҳ�����
//int main() {
//    int x = 1, y = 0, a = 0, b = 0;
//    switch (x) {
//    case 1:
//        switch (y) {
//        case 0:
//            a++;
//            break;
//        case 1:
//            b++;
//            break;
//        }
//    case 2:
//        a++;
//        b++;
//        break;
//    case 3:
//        a++;
//        b++;
//        break;
//    }
//    printf("a=%d,b=%d\n", a, b);
//}

//�������
void swap(int *p, int *q)
{
    int t;
    t = p;
    p = q;
    q = t;
}
int main()
{
    swap(int p, int q);
    int a = 10, b = 20;
    printf("(1)a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("(2)a = %d, b = %d\n", a, b);
}
