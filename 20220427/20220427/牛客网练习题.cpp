#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//λ������
//int main()
//{
//	int i = 5;
//	//00000000000000000000000000000110
//	int j = 7;
//	//00000000000000000000000000000111
//	i | j;
//	//7
//	return 0;
//}

//�����ͳ��������Ƿ���ȷ
//int main()
//{
//	const float pi = 3.1415926f;
//	printf("%f\n", pi);
//	return 0;
//}
//
//�������н��
//int main() {
//    int a = 1, b = 10;
//    do {
//        b -= a;
//        a++;
//    } while (b-- < 0);
//    printf("a=%d,b=%d\n", a, b);
//}easy

//ָ����λ
//int main()
//{
//	unsigned char* p1;
//	unsigned long* p2;
//	p1 = (unsigned char*)0x801000;
//	p2 = (unsigned long*)0x810000;
//	printf("%p\n", p2+5);
//	return 0;
//}


//ִ�н��
//int main() {
//    int* p = NULL;
//    int a[] = { 1, 2, 3, 4 };
//    p = a;
//    *(p++) += 100;
//    printf("%d %d %d %d %d\n", *p, a[0], a[1], a[2], a[3]);
//    return 0;
//}


//��  --���帳ֵ
//#define MIN(x,y)    (x)<(y) ? (x):(y)
//int main() {
//    int i = 10, j = 15, k;
//    k = 10 * MIN(i, j);
//    printf("%d\n", k);
//}


//ִ�н��
//int i;
//int main() {
//    for (i = 0; i < 3; i++) {
//        switch (i) {
//        case 0: printf("%d", i);
//        case 2: printf("%d", i);
//        default: printf("%d", i);
//        }
//    }
//}

//���¶�����Ķ����ܷ���ȷ��ӡstudent�أ�����  --�𰸲�ȷ������ѭ����ӡ���ԣ���Ŀ��ܳ�������
//int main()
//{
//	int i = 0;
//	char ch[7] = { 's',  't', 'u', 'd', 'e', 'n', 't' };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}

//��������ķ�ʽ
//int main()
//{
//	
//	int i = 2017;
//	int arr[i];//����Ķ�������
//	int arr[2017 * 2];//�����ǳ������ʽ
//		return 0;
//}