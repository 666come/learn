#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ַ�����ĸ�ֵ��ʹ��
//int main()
//{
//	char arr[10] = "asdfgh";//��ʼ���ַ�����
//	char arr1[20];
//	arr1 = "sdfgh";//�����ڳ�ʼ��ʱ���Ը�ֵ�����������ø�ֵ������ֵ
//	arr;
//	arr++;
//	return 0;
//}


//int main()
//{
//	int x = 2013;
//	float y = 201.3;
//	if (x == (int)(float)x)
//		printf("%d\n", x);
//	if (y == (float)(int)y)//()�����ҽ����
//		printf("%d\n", y);
//	return 0;
//}

//������
//int main(void) {
//    int num = 0, s = 0;
//    while (num <= 2)
//    {
//        num++;
//    s += num;
//     }
//     printf("%d\n", s);
//     return 0;
//}//6

//������
//void abc(char* str) {
//    int a, b;
//    for (a = b = 0; str[a] != '\0'; a++)
//        if (str[a] != 'c')
//            str[b++] = str[a];
//    str[b] = '\0';
//}
//int main() {
//    char str[] = "abcdef";
//    abc(str);
//    printf("str[]=%s", str);
//}//�������е�C����

//������
//void fun(int x, int y, int* c, int* d) {
//    *c = x + y;
//    *d = x - y;
//}//��ַ���Σ���ı�ԭ���Ĵ�С
//
//int main() {
//    int a = 4, b = 3, c = 0, d = 0;
//    fun(a, b, &c, &d);
//    printf("%d %d", c, d);
//}

int main()
{
	sizeof(double);
	printf("\"My salary was increased by 15 %% \"!");
	return 0;
}