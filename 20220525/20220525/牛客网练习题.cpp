#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C���Ա�ʶ��
//int main()
//{
//	int D56;
//	int r_1_2;
//	int name;
//	int _st_1;
//	int sum;
//	int average;
//	int S.b;//�����Գ��� .
//	return 0;
//}

//������
//int fun( char* s)
//{
//    char* p = s;
//    while (*p != '\0') p++;
//    return (p - s);
//}
//int main()
//{
//    const char* p = "goodbye!";
//    printf("%d\n", fun(p));//��������֧��
//}

//x=2014,������
//int fun(unsigned int x) {
//    int n = 0;
//    while (x + 1) {
//        n++;
//        x = x | (x + 1);//ͳ��0�ĸ���
//        
//    }
//    return n;
//}
//int main()
//{
//    printf("%d\n", fun(2014));
//    return 0;
//}

//������
//void incre();
//int x = 3;
//
//int main() {
//    int i;
//    for (i = 1; i < x; i++)
//        incre();
//}
//void incre() {
//    static int x = 1;
//    x *= x + 1;//26
//    printf("%d", x);
//}

//������
void main(void) {
    double x = 28;
    int r;
    r = (int)x % 5;//ע��x��Ҫǿ������ת��
    printf("r=%d\n", r);
}   