#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef" ��һ�������ַ���
//	//*p = 'w';  --p�ǳ����������Ա��޸�
//
//	printf("%s\n", p);
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";// - �����ַ���
//	const char* p2 = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//
//	}
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}

//ָ������ ������  �������ָ��

//int main()
//{
//	int arr1[10] = { 0 };//��������
//	char arr2[10] = { 0 };//�ַ�����
//	int* parr[5];//����ָ������� - ָ������
//	char* pch[5];//�ַ�ָ������� - ָ������
//
//	return 0;
//}

//ָ�����������÷�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *parr[i] + j);
		}
		printf("\n");
	}
	return 0;
}