#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"stdlib.h"


//��ά����Ĵ�ӡ
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[][3] = { 1,2,3,4,5,6,7 };//--��һ����ȷ��ʱ��������Ԫ�ظ���������+1��7/3=2 +1 =3��
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	 }
//	return 0;
//}//{1��2��3} {4��5��6} {7��8��9}


//����ִ�н��
//int main() {
//	printf("\n");
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p = a; 
//	int** k = &p;//k��ŵ���pָ��ĵ�ַ
//	printf("%d", *(p++));//�������ĵ�һ��Ԫ��
//	printf("%d", **k);//�������ĵڶ���Ԫ��
//	return (0);
//}

//strcpy������ʹ��
//#include<string.h>
//int main()
//{
//	char s1[] = "12345";
//	const char* s2 = "1234";
//	printf("%d\n", strlen(strcpy(s1, s2)));
//	
//	return 0;
//}

//����fun()����������������ֵ���±�
//void fun(int* s, int n, int* k) {
//    int i;
//    for (i = 0, *k = i; i < n; i++)
//        if (s[i] > s[*k])
//           * k=i;//�����
//}
//
//int main() {
//    int a[5] = { 1, 6, 2, 8, 0 }, k;
//    fun(a, 5, &k);
//    printf("%d %d��n", k, a[k]);
//}

//int main() {
//    int a[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {11, 12, 13, 14}, {15, 16, 17, 18} };
//    int i = 0, j = 0, s = 0;
//    while (i++ < 4) {//ִ����2�Σ��ֱ���i=1��i=3���±꣩����Ӧ�ľ��ǵڶ��к͵����е�Ԫ��
//        if (i == 2 || i == 4) continue;//continue ֱ�ӽ�������ѭ��
//        j = 0;//jÿ�ζ���ʼ��
//        do {
//            s += a[i][j];//sÿ�ζ������¸�ֵ
//            j++;
//        } while (j < 4);
//
//    }
//    printf("%d\n", s);//s=92
//    return 0;
//}

int main()
{
	int a[10] = { 11,21,31,41,51,61,71,81,91,101 };
	int* p = a;
	printf("%d\n", *p);
	return 0;
}