#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;//�еİ汾������ --&&��ӡ�����������ͬ
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	int a = 0x11223344;
//	int* pa = &a;//����4���ֽ�
//	*pa = 0;//��ַȫ���0
//	char* pc = &a;//����1���ֽ�
//	*pc = 0;//ǰ������ַ���0
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//a�ĵ�ַ�ӵ�1��int���ֽڴ�С4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//a�ĵ�ַ��1��char���ֽڴ�С1
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		//ע��۲��ڴ�ı仯
//	}
//	return 0;
//}
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//		//��i>10֮��ͻ����ָ��Խ�� --Ұָ��
//	}
//	return 0;
//}
//int* test()
//{
//	
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d\n", *p);
//	
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL --������ʼ��ָ��ģ���ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//	printf("%d\n", *pa);
//	return 0;
//}
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int	sz = sizeof(arr) / sizeof(arr[0]);
	//	int* p = arr;
	//	/*for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p++;
	//	}*/
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%d ", *p);
	//		p+=2;
	//	}
	//	return 0;
	//}
//int  main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);
//	&arr[9] - &ch[0];//err
//	//�м�Ԫ�ظ���
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen -�������ķ�ʽ1���ݹ�ķ�ʽ2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
  
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ -��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);// -��Ԫ�صĵ�ַ
//	printf("%p\n", &arr);// -����Ԫ�صĵ�ַ
//	//1.&arr -&������- ������������Ԫ�صĵ�ַ-��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr) -sizeof(�������� -��������ʾ������������-sizeof(������)���������������ĵĴ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ======  %p\n", p+i,&arr[i]);
//	}*/
//	return 0;
//}
//ָ��ĵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	int** * pppa = &ppa;//pppa��������ָ��
//	/*printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", ppa);*/
//	**ppa = 20;
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	printf("%d\n", ***pppa);
//
//
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	int arr1[10];
	int* arr2[3]= {&a, & b, & c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d " ,* (arr2[i]));

	}
	return 0;

}