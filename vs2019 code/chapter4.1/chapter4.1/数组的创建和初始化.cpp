#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//����һ������-���10������
//	int arr[10] = {1,2,3};//����ȫ��ʼ��--ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��0
//	char arr2[5] = {'a',98}; //--��98����Ӧ��ASCII��ֵ����b
//	char arr3[5] = "ab";//�����ķ�ʽҲ��OK�� -- ���������Ԫ�ء�a�� 'b' '\0'
//	char arr4[] = "abcdef";// --�Զ�����7���ַ�����
//	printf("%d\n", sizeof(arr4));
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� -char 7*1 =7
//	printf("%d\n", strlen(arr4));//--strlen�����ַ�����  --\0֮ǰ���ַ�����
//	//[a,b,c,d,e,f,\0]
//	// 6
//	//int n = 5;
//	//char ch[n];//error(Ӧ���볣�����ʽ)
//	/*int count = 10;
//	int arr2[count];*/
//	/*float arr4[1];
//	double arr5[20];*/
//	return 0;
//}

//1.strlen �� sizeof û��ʲô����
//2.strlen ʱ���ַ������ȵ�--ֻ������ַ����󳤶� --�⺯�� -ʹ�õ���ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С -��λ���ֽ� - ������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ ��û��\0 --�ַ��������ı�־��
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4] = { {1,2,3},{4,5} };//3��4��
//	//char arr[3][5];//3��5��
//	//double arr[2][4];//2��4��
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�� ���в���ʡ��
//	return 0;
//}
// ��ӡ��ά����
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ��ά����ĵ�ַ
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j, &arr[i][j]);
//
//		}
//		
//	}
//	return 0;
//}

//ð������
//void bubble_sort(int arr[] ,int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д���  --ʵ���ϴ��ݹ�ȥ����arr��Ԫ�صĵ�ַ &arr[0]
//	
//
//	return 0;
//}
 
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������)  --��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ

	printf("%p\n", arr);  //��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]);  //��Ԫ�صĵ�ַ
	printf("%d\n", *arr);  //����Ԫ�صĵ�ַ
	return 0;
}